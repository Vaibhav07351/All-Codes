import unittest
import learning67


class TestMains(unittest.TestCase):
    def setUp(self):
        print('Testing This function')

    def test_checker(self):
        '''simple check'''

        result =learning67.new(7,6)
        self.assertTrue(result)


if __name__=='__main__':
    unittest.main()