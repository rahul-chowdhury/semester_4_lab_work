(define ( maxm l)
	(
		cond(
			
				(null? (cdr l))
				(car l)
			)
			(
				(> (car l) ( maxm (cdr l)))
				(car l)
			)
			(
				else
				( maxm (cdr l))
			)
		
        )
)
(maxm (list 1 2 3 4 5 6 7 8 9))






