class Reader():
    def __init__(self, book_name):
        self.book = open(book_name, 'r')
        
    def __iter__(self):
        return self

    def __next__(self):
        page = self.book.readLine()
        if page:
            pass
        else:
            set.book.close()
            raise StopIteration


def restart(book_name):
    Reader(book_name)

