#JALR
#-11
#RaphaelBijaoui
#Unaligned bounds
#
#

lui $10, 0x1000
addi $10, $10, 29
addi $2, $0, 1
jalr $10
sll $0, $0, 0
addi $2, $2, -1
addi $2, $2, 5
add $2, $2, $2
jr $0