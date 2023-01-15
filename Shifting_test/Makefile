#replace the real name 
TOPNAME = Shifting_reg_test


VERILATOR = verilator
VERILATOR_WAVES = --trace  -cc --exe

WAVE_OBJ_DIR = ./obj_dir
GWAVE = $(WAVE_OBJ_DIR)/V$(TOPNAME)

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")



#The below code is the gengerate the wave,write by myself.
.PHONY:lint
lint:$(VSRCS)
	@echo
	@echo "***quickly parse the $(VSRCS) and check for problems"
	verilator --lint-only --top-module $(TOPNAME) $(VSRCS)

.PHONT:wave
wave:./waveform.vcd
	@echo
	@echo "***clean the ./obj_dir***"
	rm -rf $(OBJ_DIR)
	@echo "***GTKwave the module***"
	gtkwave $^
./waveform.vcd:$(GWAVE)
	@echo
	@echo "***Build the waveform file"
	$^
$(GWAVE):$(VSRCS) $(CSRCS)
	@echo
	@echo "***Verilating the .v***"
	$(VERILATOR) $(VERILATOR_WAVES) \
		--top-module $(TOPNAME) $^ 
		
	@echo "***build the waveform.vcd***"
	make -C $(WAVE_OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)

clean:
	rm -rf ./waveform.vcd
	rm -rf $(WAVE_OBJ_DIR)

.PHONY:  clean 