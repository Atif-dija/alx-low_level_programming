section		.data
	print  db 'Hello, Holberton',0xa,0

section		.text
	global	main
	extern	printf
main:
	mov	edi,	print
	mov	eax,	0
	call	printf

