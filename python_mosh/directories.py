from pathlib import Path

#Absolute path

#C:\Program Files\Microsoft
# /usr/local/bin

#Relative Path
path = Path("new directories")
print(path.exists())


path = Path("python_mosh")
for file in path.glob("*.py"):
    print(file)

