'''Item Config entity'''

from .constatns import CONFIG_CLASS_TEMPLATE, XPI_TEMPLATE, \
    POINTER_TEMPLATE, POINTER_DEFAULT, FLASHLIGHT_TEMPLATE, FLASHLIGHT_DEFAULT


class ItemInfo:
    '''CfgWeapons.Wepon.ItemInfo subclass'''
    def __init__(self, setting: str, pos: str, direction: str):
        self.setting = setting
        self.position = pos
        self.direction = direction


class ItemConfig:
    '''Item config class'''
    def __init__(self, classname: str, parent_classname: str, bundle: str,
                 scope: int,
                 item_type: str, mode: str, asgd_type: int,
                 pointer_data: tuple[str], flashlight_data: tuple[str]
                 ):
        self.classname: str = classname
        self.parent_classname: str = parent_classname
        self.bundle: str = bundle
        self.scope = scope
        self.type: str = item_type
        self.mode: str = mode
        self.asdg_type: int = asgd_type

        self.pointer: ItemInfo | None = None
        if pointer_data:
            self.pointer = ItemInfo(*pointer_data)

        self.flashlight: ItemInfo | None = None
        if flashlight_data:
            self.flashlight = ItemInfo(*flashlight_data)

    def format_class(self) -> str:
        '''Formats class'''
        try:
            xpi_data = XPI_TEMPLATE \
                .replace("$xpi_bundle", self.bundle) \
                .replace("$xpi_type", self.type) \
                .replace("$xpi_mode", self.mode)

            pointer_data = POINTER_DEFAULT
            if self.pointer:
                pointer_data = POINTER_TEMPLATE \
                    .replace("$pointer", self.pointer.setting) \
                    .replace("$pos", self.pointer.position) \
                    .replace("$dir", self.pointer.direction)

            flashlight_data = FLASHLIGHT_DEFAULT
            if self.flashlight:
                flashlight_data = FLASHLIGHT_TEMPLATE \
                    .replace("$flashlight", self.flashlight.setting) \
                    .replace("$pos", self.flashlight.position) \
                    .replace("$dir", self.flashlight.direction)
        except:
            print(self)

        return CONFIG_CLASS_TEMPLATE \
            .replace("$class", self.classname)     \
            .replace("$parent", self.parent_classname)   \
            .replace("$scope", str(self.scope))     \
            .replace("$flashlight", pointer_data)   \
            .replace("$pointer", flashlight_data)   \
            .replace("$xpi", xpi_data)

    def __repr__(self):
        return f"{self.classname} (child of {self.parent_classname}), bundle={self.bundle}"