from translate import Translator
translator= Translator(to_lang="ja")

try:
    with open(r'C:\Users\Bhardwaj\Desktop\trial.txt',mode='r',encoding="utf-8") as new_file:
        file_content=(new_file.read())
        translated_text = translator.translate(file_content)
        print(file_content)
        with open(r'C:\Users\Bhardwaj\Desktop\trial2.txt', mode='w',encoding="utf-8") as new_file2:
            new_file2.write(translated_text)

except FileNotFoundError as err:
    print('File not Found!')