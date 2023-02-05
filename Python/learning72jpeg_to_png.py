from PIL import Image, ImageFilter
import sys, os

input_source = str(sys.argv[1])
target_source = str(sys.argv[2])

source_folder_path = str(fr'C:\Users\Bhardwaj\PycharmProjects\HelloWorld\{input_source}')
target_folder_path = str(fr'C:\Users\Bhardwaj\PycharmProjects\HelloWorld\{target_source}')

if os.path.exists(target_folder_path):
    os.chdir(fr'{source_folder_path}')
    photos = os.listdir()
    for i in photos:
        os.chdir(fr'{source_folder_path}')
        img = Image.open(str(i))
        os.chdir(fr'{target_folder_path}')
        img.thumbnail((400, 400))
        img.save(fr'{os.path.splitext(i)[0]}.png', 'png')
        print('done!')

if not os.path.exists(target_folder_path):
    os.mkdir(target_folder_path)
    os.chdir(fr'{source_folder_path}')
    photos = os.listdir()
    for i in photos:
        os.chdir(fr'{source_folder_path}')
        img = Image.open(i)
        os.chdir(fr'{target_folder_path}')
        img.thumbnail((400, 400))
        img.save(fr'{os.path.splitext(i)[0]}.png', 'png')
        print('done!')
