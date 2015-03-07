(define ( sum l)
	(
		cond(
			
				(null? l)0
				
			)
			(
				else
				(+ (car l) (sum(cdr l)))
			)
		
        )
)
(sum(list 3 2 3 4 5 6 7 8 9))






