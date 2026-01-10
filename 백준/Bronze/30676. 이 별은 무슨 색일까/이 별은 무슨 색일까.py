import sys
star = int(sys.stdin.readline())

if 620 <= star <= 780:
    print("Red")
elif 590 <= star < 620:
    print("Orange")
elif 570 <= star < 590:
    print("Yellow")
elif 495 <= star < 570:
    print("Green")
elif 450 <= star < 495:
    print("Blue")
elif 425 <= star < 450:
    print("Indigo")
elif 380 <= star < 425:
    print("Violet")