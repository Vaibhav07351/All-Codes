from PIL import Image, ImageFilter

img = Image.open(r'D:\photography\Pingu\DSC_0726.jpg')

# filtered_img= img.filter(ImageFilter.SHARPEN)

# filtered_img=img.convert('L')
# filtered_img.save('grey.jpeg','jpeg')
#
# #img.rotate(45).show()
#
# img.thumbnail((50,50))
# img.save('thumbnail.jpeg','jpeg')
# new_copy= img.resize((50,50))
# new_copy.save('resized.jpeg','jpeg')

box=(100,100,2000,1300)
new_cropped_img=img.crop(box)
new_cropped_img.show()
