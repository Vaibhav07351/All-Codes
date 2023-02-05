# Create an @authenticated decorator that only allows the function to run is user1 has 'valid' set to True:
user1 = {
    'name': 'Sorna',
    'valid': True, #changing this will either run or not run the message_friends function.
    'c':1
}

def authenticated(fn):
  def wrap_func(*args,**kwargs):
      print(args)
      if args[0]['valid']==True:
        fn(*args,**kwargs)

  return wrap_func


@authenticated
def message_friends(user):
    print('message has been sent')

message_friends(user1)