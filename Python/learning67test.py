import unittest
import learning65


class TestMains(unittest.TestCase):
    def setUp(self):
        print('Testing This function')

    def test_checker(self):
        '''simple check'''
        num = 10
        result = learning65.do_stuff(num)
        self.assertEqual(result, 15)

    def test_checker2(self):
        '''string input check'''
        num = 'adasdasda'
        result = learning65.do_stuff(num)
        self.assertIsInstance(result, ValueError)

    def test_checker3(self):
        num = None
        result = learning65.do_stuff(num)
        self.assertEqual(result, 'Please enter number')

    def test_checker4(self):
        num = ''
        result = learning65.do_stuff(num)
        self.assertEqual(result, 'Please enter number')

    def test_checker5(self):
        num = 0
        result = learning65.do_stuff(num)
        self.assertEqual(result, 5)

    def tearDown(self):
        print('cleaning up')

if __name__ == '__main__':
    unittest.main()
