import os
from .item_config import ItemConfig
from .constatns import \
    FILE_CFG_PATCHES_ITEMLIST, FILE_CFG_WEAPONS_CLASSES, \
    FILE_CFG_DZN_XPI_BUNDLES, ASDG_TO_FILE, \
    CONFIG_ENTRY, XPI_CFG_BUNDLE, \
    ASDG_RIFLE_TYPE, ASDG_PISTOL_TYPE, ASDG_RHS_AK_BARREL, \
    ASDG_RHS_AK_ZENITCO_FULL


def __write_to_file(dirname: str, filename: str, content: str):
    '''Writes content to file at given dir. Creates dir if not exists'''
    if not os.path.exists(dirname):
        os.mkdir(dirname)

    with open(os.path.join(dirname, filename), 'w', encoding='utf-8') as f:
        print(f"Writing {len(content)} chars into {os.path.join(dirname, filename)}")
        f.write(content)
        f.close()


def export_cfg_patches(items: list[ItemConfig], output_dir: str):
    '''Exports comma separated classnames for CfgPatches.weapons property'''
    __write_to_file(
        output_dir,
        FILE_CFG_PATCHES_ITEMLIST,
        ",\n".join([f'"{item.classname}"' for item in items])
    )


def export_cfg_weapons(items: list[ItemConfig], output_dir: str):
    '''Exports formatted classes for CfgWeapons'''
    __write_to_file(
        output_dir,
        FILE_CFG_WEAPONS_CLASSES,
        "".join([item.format_class() for item in items])
    )


def export_cfg_dzn_xpi(items: list[ItemConfig], output_dir: str):
    '''Exports dzn XPI bundles for CfgDznXPI.Bundles'''
    bundles = {}
    for item in items:
        bundles.setdefault(item.bundle, []).append(item.classname)

    content = []
    for k, v in bundles.items():
        bundle_items = "\n    ".join(
            [CONFIG_ENTRY.replace("$item", item) for item in v]
        )
        content.append(
            XPI_CFG_BUNDLE.replace("$bundle", k)
                          .replace("$items", bundle_items)
        )

    __write_to_file(
        output_dir,
        FILE_CFG_DZN_XPI_BUNDLES,
        "".join(content)
    )


def export_asdg_rails(items: list[ItemConfig], output_dir: str, addon_name: str):
    '''Exports ASDG rails includes'''
    rails = {
        ASDG_RIFLE_TYPE: [],
        ASDG_PISTOL_TYPE: [],
        ASDG_RHS_AK_BARREL: [],
        ASDG_RHS_AK_ZENITCO_FULL: [],
    }
    for item in items:
        entry = CONFIG_ENTRY.replace("$item", item.classname)
        if not item.asdg_type:
            continue
        rails[item.asdg_type].append(entry)

    for k, v in rails.items():
        if ASDG_TO_FILE[k]["modSpecific"] and addon_name not in ASDG_TO_FILE[k]["modSpecific"]:
            continue

        __write_to_file(output_dir, ASDG_TO_FILE[k]["file"], "\n".join(v))
