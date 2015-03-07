( define ( fibo n )
	(cond 
		 
		(( = n 1 ) 0) 
		(( = n 2 ) 1) 
		(else(+ (fibo( - n 1 )) (fibo(- n 2 )) ) )
		
	)
)
(fibo 5)

