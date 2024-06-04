def fibonacci(n):
    """
    매개변수(인수)로 들어온 n값 미만의 피보나치 수열을 출력하는 함수
    ex. 인수로 10 : 0 1 1 2 3 5 8 
    ex. 인수로 5  : 0 1 1 2 3 
    """
    a, b = 0, 1
    while a<n:
        print(a, end='. ')
        a, b = b, a+b
    print()  # 개행        
    
# 위 함수를 테스트 해보기 위함
# 다른 프로그램에서 사용할 떄는 밑에 코드는 실행안되도록 해주는 식
if __name__ == '__main__':
    fibonacci(100)
    print(__name__, '에서 테스트함')


