from PIL import Image, ImageFilter

img = Image.open(r'C:\Users\Bhardwaj\Desktop\astro.jpg')

print(img.size)
new_image = img.resize((400, 400))

new_image.save('compressed.jpeg', 'jpeg')

img.thumbnail((400, 400))
img.save('withaspect.jpeg', 'jpeg')

print(img.size)
