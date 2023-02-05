from PIL import Image

img= Image.open(r'D:\photography\Pingu\DSC_0726.jpg')

print(img)
print(img.format)
print(img.size)
print(img.mode)
print(dir(img))
print(dir(Image))