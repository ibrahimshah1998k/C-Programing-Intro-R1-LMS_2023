.globl main
.data
array:
         .word
         .word
         .word
         
         addi s0, zero, 0     #s0 holds i=0
         addi a0, zero, 0     #a0 holds num=0
         la s1, array         #s1 holds base addressof array
         addi s1, zero, 10    #s1 holds 10 for condition check
         addi s3, zero, 4
     
for:
         bge s0, s1, done
         jal compare
         mul t1, s0, s3
         sw a3, 0(s1)         #store array in array(i)
compare:
         addi sp, sp, -4      #make space on stack
         sw ra, 0(sp)         #save ra o stack
         jal subt 
         addi t2, zero, 0
         blt a0, t2, else
         addi a4, a4, 1
j done
else:    addi a4, a4, 0
         lw ra, 0(sp)  # restore ra from stack
         addi sp, sp, 4 #deallocate sp
         jr ra

subt:
         sub a0, a0, s0
         jr ra
         
