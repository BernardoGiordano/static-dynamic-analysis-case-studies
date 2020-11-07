REPORT := report

all:
	@latexmk -lualatex $(REPORT).tex

clean:
	@rm -rf $(REPORT).aux $(REPORT).log $(REPORT).bbl $(REPORT).blg $(REPORT).fdb_latexmk $(REPORT).fls $(REPORT).toc
	@echo clean...

.PHONY: all clean