if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for i in range(0,(n)):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = (input())
    if query_name in student_marks:
        c=sum(student_marks[query_name])
        d=(c/3)
        format_d="{:.2f}".format(d)
        print(format_d)
        
        
    
