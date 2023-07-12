from gui import start
from time import sleep
import asyncio
import multiprocessing

t = None
def main():
    global t
    while True:
        print("")
        print(t)
        if t == None:
            s = input("prompt: ")
        else:
            s = input("(GUI WORK!) prompt: ")

        if s == "start":
            if not process_work(t):
                ctx = multiprocessing.get_context("spawn")
                q = ctx.Queue()
                t = ctx.Process(target=start)
                t.start()
                print()
                t.join(0.1)
                print("EXITCODE "+str(t.exitcode))
            else:
                print("GUI already working! :)")
        elif s == "event":
            if process_work(t):
                print(t.event())
            else:
                print("GUI not working! :(")


def process_work(process):
    return process != None and process.exitcode == None


if __name__ == '__main__':
    main()
