import shutil

TARGET = r"G:\GMZ\steamapps\common\Arma 3\!Workshop\dzn_extended_pointer_interactions\addons"
SOURCE = r".hemttout\build\addons"

shutil.copytree(SOURCE, TARGET, dirs_exist_ok=True)
