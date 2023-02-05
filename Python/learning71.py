from PIL import Image, ImageFilter
import sys

source_folder = str(sys.argv[1])
target_folder = str(sys.argv[2])

img = Image.open(fr'{source_folder}.jpg')
img.thumbnail((400, 400))
img.save(f'{target_folder}\ 11.png', 'png')
