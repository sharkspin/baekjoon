n = int(input()) # 좌석 수
seat = input() # 좌석 정보

couple = seat.count('LL') # 커플석의 개수

if couple <= 1:
    print(n)
else:
    print(n + 1 - couple)