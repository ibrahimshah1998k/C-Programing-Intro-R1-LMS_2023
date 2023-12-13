.globl main
.data
b:
         .word 0
         .word 0
         .word 0
         
.text

          la s2, b                        #s2 stores base address of b[3]
          addi s1, zero, 7                #a=7
          addi s0, zero, zero             #i=0
          addi t0, zero, 3                #t0=3
          addi s3, zero, 4
for:
          bge s0, t0, done 
          slli t1, s0, 3             # (ix8)
          addi t1, t1, -1             #(ix8) - 1= (ixa)
          add t1, t1, s1             # ax(ix)
          mul t2, s0, s3
          sw t1, t2(s2)
          addi s0, s0, 1
          j for
done:
     
