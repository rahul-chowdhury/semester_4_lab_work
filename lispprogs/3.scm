(define (hcf n1 n2)
	(cond
		((= (modulo n1 n2) 0)n2)
		(else(hcf n2 (modulo n1 n2)))
	)
)
(hcf 4 3)
(hcf 4 2)
