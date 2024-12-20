import shutil

TARGET = "G:\\GMZ\\steamapps\\common\\Arma 3\\!Workshop\\@test\\addons"
SOURCE = r".hemttout\build\addons"

shutil.copytree(SOURCE, TARGET, dirs_exist_ok=True)
