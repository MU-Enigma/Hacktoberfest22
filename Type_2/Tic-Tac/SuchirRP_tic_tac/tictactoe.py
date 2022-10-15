import random

class TicTacToe:
    def __init__(self):
        self.board = []

    def createboard(self):
        for i in range(3):
            row = []
            for j in range(3):
                row.append('-')
            self.board.append(row)

    def getrandfirst(self):
        return random.randint(0, 1)

    def fixpos(self, row, col, player):
        self.board[row][col] = player

    def wincon(self, player):
        win = None

        n = len(self.board)

        for i in range(n):
            win = True
            for j in range(n):
                if self.board[i][j] != player:
                    win = False
                    break
            if win:
                return win

        for i in range(n):
            win = True
            for j in range(n):
                if self.board[j][i] != player:
                    win = False
                    break
            if win:
                return win

        win = True
        for i in range(n):
            if self.board[i][i] != player:
                win = False
                break
        if win:
            return win

        win = True
        for i in range(n):
            if self.board[i][n - 1 - i] != player:
                win = False
                break
        if win:
            return win
        return False

        for row in self.board:
            for item in row:
                if item == '-':
                    return False
        return True

    def isboardfilled(self):
        for row in self.board:
            for item in row:
                if item == '-':
                    return False
        return True

    def swapplayer(self, player):
        return 'X' if player == 'O' else 'O'

    def boardshow(self):
        for row in self.board:
            for item in row:
                print(item, end=" ")
            print()

    def start(self):
        self.createboard()

        player = 'X' if self.getrandfirst() == 1 else 'O'
        while True:
            print(f"{player}'s turn")

            self.boardshow()

            inp = input(f"row and column to place {player}: ").split()
            while((len(inp) != 2) ):
                print("Invalid input")
                inp = input(f"row and column to place {player}: ").split()
            #print(inp)
            #while(int(inp[0]) < 1 and int(inp[1]) < 1 and int(inp[0]) > 3 and int(inp[1]) > 3 and len(inp) != 2):
            #   print("Invalid input")
            #    inp = input(f"row and column to place {player}: ").split()

            row, col = list(map(int, inp))
            print()

            self.fixpos(row - 1, col - 1, player)

            if self.wincon(player):
                print(f"{player} wins the game!")
                break

            if self.isboardfilled():
                print("Draw!")
                break

            player = self.swapplayer(player)

        print()
        self.boardshow()


tictactoe = TicTacToe()
tictactoe.start()

