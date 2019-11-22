#beq
#0
#RaphaelBijaoui
#branch back
#

beq $0, $0, l2
sll $0, $0, 0 

l1:
jr $0
sll $0, $0, 0 

l2:
beq $0, $0, l1
sll $0, $0, 0 

