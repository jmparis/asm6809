		org $4000
		ldx #stage1
		ldu #do_stage1
!		lda ,x+
		sta ,u+
		cmpx #stage1_end
		blo <
		bra continue

stage1		phase $4200
do_stage1	ldx #stage2
		ldu #do_stage2
!		lda ,x+
		sta ,u+
		cmpx #stage2_end
		blo <
		jmp do_stage2
	
stage2		phase $4100
do_stage2	ldx #text-1
		jmp $90e5
text		fcc /MY, HOW CONVOLUTED/,13,0
stage2_end	dephase

stage1_end	dephase

continue	jmp do_stage1
