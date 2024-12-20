import os
from xlsx2classes.xlsx_reader import XLSXReader
from xlsx2classes.exporter import export_cfg_patches, export_cfg_weapons, \
    export_cfg_dzn_xpi, export_asdg_rails

XLSX_FILENAME = 'data.xlsx'
DIR_PREFIX = "../addons"


def export(items: list, output_dir: str, addon: str) -> None:
    '''Exports data into .hpp files'''
    export_cfg_patches(items, output_dir)
    export_cfg_dzn_xpi(items, output_dir)
    export_cfg_weapons(items, output_dir)
    export_asdg_rails(items, output_dir, addon)


if __name__ == '__main__':
    content = XLSXReader(XLSX_FILENAME).get_items()
    for addon, items in content.items():
        export(items, os.path.join(DIR_PREFIX, addon), addon)
