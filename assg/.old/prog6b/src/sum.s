.text
.globl  sum
.type   sum, @function
sum:

  pushl  %ebp
  movl  %esp, %ebp

  movl  8(%ebp), %eax    # eax  = n
  addl  $1, %eax         # eax += 1
  imull  8(%ebp), %eax   # eax *= n
  sar   %eax             # eax /= 2

  popl  %ebp
  ret
