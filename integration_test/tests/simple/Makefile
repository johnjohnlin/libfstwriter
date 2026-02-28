
ALL := simple

simple: Simple.sv
	verilator --cc Simple.sv -Mdir verilated --cc -trace-fst -trace-max-width 8000 \
	--top-module Simple -Wno-lint
