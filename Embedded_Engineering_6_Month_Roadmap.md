# Embedded Systems & Firmware Engineering — 26-Week Roadmap

> **Personal learning plan | 24 November 2026 – 24 May 2027**
>
> Starting point: C fundamentals and the 30 pointer exercises have been covered. Next: bitwise operators. Goal: build demonstrable junior-level embedded firmware and low-level systems skills, not merely finish a syllabus.

**Primary path:** Embedded C → electronics → ARM Cortex-M / STM32 → peripheral drivers → FreeRTOS → embedded Linux → portfolio and interviews.

**Long-term direction:** Firmware, device drivers, computer architecture and semiconductor-oriented systems engineering. Companies such as AMD, Intel, Qualcomm, NVIDIA, NXP and Texas Instruments are long-term targets, not guaranteed outcomes of this plan.

## Contents

- [How to use this file](#how-to-use-this-file)
- [Starting point and immediate next steps](#starting-point-and-immediate-next-steps)
- [Time budget and weekly rhythm](#time-budget-and-weekly-rhythm)
- [26-week overview](#26-week-overview)
- [Hardware and development environment](#hardware-and-development-environment)
- [Daily plan](#daily-plan)
- [Practice banks](#practice-banks)
- [Portfolio specifications](#portfolio-specifications)
- [Parallel interview and architecture track](#parallel-interview-and-architecture-track)
- [Testing and debugging playbook](#testing-and-debugging-playbook)
- [Resources](#resources)
- [Final readiness assessment](#final-readiness-assessment)
- [Progress journal](#progress-journal)

## How to use this file

1. Open this `.md` file in VS Code. Press `Ctrl+Shift+V` for Markdown Preview; use `Ctrl+K V` to preview beside the editor.
2. Edit `- [ ]` to `- [x]` only after finishing and verifying a task. The preview is for reading; the source is where you edit checkboxes.
3. Work through the daily tasks in order. Each week's deliverable should become a real folder or commit in your Git repository.
4. Attempt coding problems yourself for 15–30 minutes first. Ask for a hint, then a smaller example, then the solution only when necessary. Rebuild guided solutions from memory the following day.
5. Never mark a hardware lab done because a video or simulator worked. Mark it **simulated** until verified on your own board.
6. At each checkpoint, test yourself without AI or notes. If a critical prerequisite fails, repeat the relevant lab before progressing.

### Scope and feasibility

The original roadmap was 54 weeks at roughly 15 hours/week. This revision uses 26 weeks at approximately 25–30 hours/week (650–780 scheduled hours), reuses prior progress and merges practice projects into larger portfolio builds. It is an aggressive plan, not equivalent to completing all 54 weeks in the same depth. The core firmware path is mandatory; advanced Linux driver work, full PCB fabrication, CAN, BLE and OTA are limited or optional. The plan assumes access to an Arduino-compatible board early, an STM32 Cortex-M board by Week 5 and basic tools/sensors thereafter. A Linux VM is sufficient for the virtual character-device exercise; physical GPIO driver validation requires a supported Linux board. College exams, part availability and debugging can delay the stretch goals. Do not sacrifice sleep or core labs to hit a calendar date.

## Starting point and immediate next steps

### Progress carried over (24 November 2026)

- [x] C variables, operators, conditionals, loops, functions, arrays and strings — covered.
- [x] Structures, typedef and pointer fundamentals — covered.
- [x] All 30 pointer exercises — covered, including guided solutions.
- [x] Dynamic allocation, double pointers, function pointers, custom `memcpy` and `memset` — introduced and practised.
- [x] Revisit pointer problems 3 and 9: separate `swapInt(int *, int *)` from the character swap.
- [x] Revisit problem 8: independent min/max comparisons; use the actual array length.
- [x] Revisit problem 23: demonstrate `calloc` zero initialization before assigning values.
- [x] Rebuild problems 24–30 independently; guard input, allocation and edge cases.
- [x] Verify empty-string handling in reversal/palindrome; add `<stdbool.h>` for C17 boolean code.
- [x] Confirm Arduino Blink still runs; confirm basic tools and parts are available. Earlier roadmap marked setup/blink as done; hardware status has not been independently verified.

### Start now — Day 1 (24 November)

Today's first task is **bitwise operations**, not restarting C or installing new IDEs.

- [ ] 20 min: revise binary, hexadecimal and powers of two; write 12, 10, 255 and 0xA5 in binary.
- [ ] 40 min: practise `&`, `|`, `^`, `~`, `<<`, `>>` using unsigned values.
- [ ] 75 min: solve exercises B01–B08 below (try independently). Predict output before running.
- [ ] 45 min: learn bit masks and practise M01–M04 (set, clear, toggle, check).
- [ ] 30 min: implement a helper to print eight bits and test 0, 1, 128 and 255.
- [ ] 20 min: compile with warnings, save results and write three sentences explaining AND vs logical AND, XOR and unsigned shifts.
- [ ] If extra time remains, do B09–B15. If not, finish tomorrow; do not count guided solutions as independent mastery.

First exercise:

```c
#include <stdio.h>

int main(void)
{
    unsigned int a, b;
    /* TODO: read two integers safely and print a & b, a | b, a ^ b */
    return 0;
}
```

For inputs `12` and `10`, expect `AND: 8`, `OR: 14`, `XOR: 6`.

## Time budget and weekly rhythm

A sustainable baseline is **27 hours/week**: six focused days at roughly 4–4.5 hours, then 1–2 hours of light review/rest. Adjust for classes. Keep hardware work and active recall even during exam weeks.

| Activity | Typical weekly hours |
|---|---:|
| Theory, datasheets and notes | 5 |
| C / systems coding | 6 |
| Hardware and project builds | 9 |
| Debugging, unit tests and documentation | 4 |
| DSA, architecture and interview recall | 3 |
| Total | 27 |

**Normal day:** 45–60 min theory → 60–90 min coding → 90 min lab/project → 30 min tests/notes → 20–30 min interview recall when scheduled. Take breaks between blocks.

**Exam-week fallback:** 30–60 min daily (recall, one small C exercise, review datasheet); reserve hardware builds for the weekend. Move optional labs to Week 24 or 26. If you cannot finish core milestones, extend the plan rather than marking them falsely complete.

**Weekly definition of done (applies to all 26 weeks):**

- [ ] Working source code committed; builds without unexplained warnings.
- [ ] At least three meaningful test cases (normal, boundary, failure where relevant).
- [ ] README with goal, build/run/flash instructions, hardware connections if applicable, observed output and one bug/fix.
- [ ] Hardware output photo/video, logic trace or terminal capture if relevant.
- [ ] Five-question closed-notes recall; explain the build aloud for two minutes.
- [ ] Record actual study time, blockers and tasks carried forward.

## 26-week overview

| Week | Dates | Focus | Deliverable |
|---:|---|---|---|
| 1 | 24 Nov – 30 Nov 2026 | C bit manipulation and modular programming | Bit utility library + modular function-pointer calculator |
| 2 | 01 Dec – 07 Dec 2026 | Arduino GPIO, switches and PWM | Nonblocking button-controlled LED dimmer |
| 3 | 08 Dec – 14 Dec 2026 | Electronics and digital logic | Measured voltage divider and transistor LED switch |
| 4 | 15 Dec – 21 Dec 2026 | C internals and Linux tools | Host-side register simulator with test suite |
| 5 | 22 Dec – 28 Dec 2026 | ARM Cortex-M and STM32 bring-up | STM32 HAL blink with debugger evidence |
| 6 | 29 Dec – 04 Jan 2027 | Bare-metal GPIO and register-level drivers | Reusable STM32 GPIO module |
| 7 | 05 Jan – 11 Jan 2027 | Interrupts and time-based state machines | Interrupt-driven button with deferred debounce |
| 8 | 12 Jan – 18 Jan 2027 | Timers, PWM, ADC and clocks | Sensor-controlled PWM dimmer |
| 9 | 19 Jan – 25 Jan 2027 | UART and ring buffers | UART console with interrupt-driven reception |
| 10 | 26 Jan – 01 Feb 2027 | I2C and OLED | Minimal I2C OLED driver |
| 11 | 02 Feb – 08 Feb 2027 | SPI and persistent EEPROM | SPI EEPROM read/write driver |
| 12 | 09 Feb – 15 Feb 2027 | Sensor integration and DMA | Multi-sensor telemetry demo |
| 13 | 16 Feb – 22 Feb 2027 | FreeRTOS foundations | Independent periodic tasks |
| 14 | 23 Feb – 01 Mar 2027 | FreeRTOS queues and synchronization | Queued sensor/event pipeline |
| 15 | 02 Mar – 08 Mar 2027 | RTOS integration and fault handling | Fault-aware RTOS sensor controller |
| 16 | 09 Mar – 15 Mar 2027 | ESP32 and connectivity (focused) | MQTT sensor monitor; mid-plan buffer |
| 17 | 16 Mar – 22 Mar 2027 | Linux systems programming | Linux serial/logging utility |
| 18 | 23 Mar – 29 Mar 2027 | Toolchain, debugging and architecture | Reproducible build/debug workflow |
| 19 | 30 Mar – 05 Apr 2027 | Linux kernel modules | Hello World kernel module in a VM |
| 20 | 06 Apr – 12 Apr 2027 | Linux character device interfaces | Virtual character-device driver |
| 21 | 13 Apr – 19 Apr 2027 | Device tree and physical GPIO (conditional) | GPIO driver prototype or documented virtual alternative |
| 22 | 20 Apr – 26 Apr 2027 | Portfolio build: STM32 data logger | Integrated data logger v1 |
| 23 | 27 Apr – 03 May 2027 | Portfolio build: FreeRTOS controller | Polished RTOS smart controller |
| 24 | 04 May – 10 May 2027 | Portfolio hardening and elective buffer | Polished Linux driver + elective only if ready |
| 25 | 11 May – 17 May 2027 | Interview preparation and computer architecture | Technical interview notebook and mock round |
| 26 | 18 May – 24 May 2027 | Final integration, buffer and applications | Application-ready evidence pack |

## Hardware and development environment

### Acquisition plan (check inventory before buying)

| When | Required / useful | Compatibility checks |
|---|---|---|
| Weeks 1–3 | Existing Ubuntu laptop, Arduino-compatible board, USB data cable, breadboard, jumper wires, LEDs, push buttons, 220–1kΩ resistors, 10kΩ resistors, multimeter | Exact board pinout, USB driver, voltage/current limits |
| Week 3 | Small capacitors, diodes, transistor, potentiometer, optional 555 | Match supply and polarity; use low-voltage circuits only |
| Before Week 5 | STM32 Nucleo board with Cortex-M4 (e.g. NUCLEO-F401RE or F446RE if available), USB cable, onboard ST-LINK | Verify specific board supports desired peripherals, timers, memory and toolchain; do not mix register maps across families |
| Weeks 8–12 | Potentiometer, optional LM35, I2C OLED, SPI EEPROM, RTC, accelerometer, logic analyzer | Confirm protocol and voltage, pull-ups, addresses, SPI mode; ensure analyzer inputs tolerate voltage |
| Week 16 | ESP32 development board, optional sensor | Exact chip/module, 3.3 V I/O, USB cable |
| Weeks 19–21 | Linux VM; optional Raspberry Pi or suitable Linux SBC, storage/power supply | Matching kernel headers, supported GPIO and device-tree workflow |
| Week 22 | Compatible microSD module/card | MCU logic level, SPI mode, regulator/level shifter behavior, supported filesystem |
| Week 24 optional | CAN-capable controllers, two transceivers, termination; PCB tools | Only for optional lab; controller and transceiver are separate; verify board support |

No purchase price or availability is assumed. A simulator can bridge delays but does not replace physical validation. If hardware is missing, use a host simulation of register/state logic, then repeat physical lab when available.

### Safety and lab habits

- Work with USB-powered low-voltage circuits only. Disconnect power before rewiring. Never connect mains voltage, a vehicle bus or high-current loads to these beginner labs.
- Check datasheets and ground reference before connecting modules. Do not assume a 5 V Arduino output is safe on a 3.3 V MCU input.
- Always use LED current-limiting resistors. Select values for the actual voltage, forward drop and conservative current within pin limits.
- Measure current only with correct multimeter range/lead setup in series; never place a meter in current mode directly across a supply. Measure resistance only with power off.
- Use SWD and vendor-supported flash utilities; do not write unknown registers or erase protection settings blindly. Use a VM snapshot for kernel experiments.

### Suggested repository structure

```text
embedded-journey/
├── README.md
├── ROADMAP.md
├── 01-c-foundations/
│   ├── pointers/
│   ├── bitwise/
│   ├── bit-masks/
│   └── modular-calculator/
├── 02-arduino-electronics/
├── 03-stm32/
│   ├── gpio/
│   ├── interrupts/
│   ├── timers-adc/
│   ├── uart/
│   ├── i2c/
│   └── spi/
├── 04-freertos/
├── 05-esp32/
├── 06-linux-userspace/
├── 07-linux-drivers/
├── 08-portfolio/
│   ├── stm32-data-logger/
│   ├── freertos-controller/
│   └── linux-char-device/
├── interview-prep/
└── notes/
```

Adapt to existing folder names rather than duplicating work. Each project should contain its own README, source, tests, wiring or architecture notes, and reproducible build instructions. Ignore private credentials, build outputs, IDE caches and unnecessary binaries.

## Daily plan

The schedule starts on Tuesday 24 November. Each week runs Tuesday–Monday; Day 7 is deliberately lighter. Dates are targets, not deadlines that override readiness. Day 182 is 24 May 2027.

### Week 01 — C bit manipulation and modular programming

**Dates:** 24 Nov 2026 – 30 Nov 2026  
**Study:** Bit masks, preprocessor, header files, multi-file builds  
**Deliverable:** Bit utility library + modular function-pointer calculator

- [ ] **Day 001 · Tue, 24 Nov** — Binary/hex and the six bitwise operators. Solve B01–B08, M01–M04; predict each output before execution.
- [ ] **Day 002 · Wed, 25 Nov** — Finish B09–B15 and M05–M15; implement set/clear/toggle/test with unsigned masks. Test invalid bit positions; use a simulated 32-bit register.
- [ ] **Day 003 · Thu, 26 Nov** — Preprocessor: object/function-like macros, parentheses, multiple evaluation, `#if`, `#ifdef`, include guards. Implement `BIT` and `ARRAY_LEN` with documented limitations; compare macros with inline functions.
- [ ] **Day 004 · Fri, 27 Nov** — Modular C: split calculator into main.c, calc.c, calc.h. Use declarations, internal static helpers, compile objects separately, link and run. Handle invalid input and division by zero.
- [ ] **Day 005 · Sat, 28 Nov** — Add test_calc.c and a Makefile with all, test, clean targets. Write assertions for all arithmetic operations; compile with warnings and host sanitizers. Fix remaining pointer issues 3, 8, 9, 23.
- [ ] **Day 006 · Sun, 29 Nov** — Rebuild function pointer calculator and one of memcpy/memset without notes. Add a README, sample terminal output and commit. Start a weekly learning journal.
- [ ] **Day 007 · Mon, 30 Nov** — Closed-notes quiz: set/clear/toggle bit 5; explain `&` vs `&&`, macro side effects, header guards, function pointer calls. Rest; carry forward unfinished exercises.

**Exit gate:** Masking does not alter unrelated bits; calculator builds from separate files and tests pass.

**Interview recall:** Explain `reg &= ~(1u << k)`; why does `sizeof` on an array parameter differ?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 02 — Arduino GPIO, switches and PWM

**Dates:** 01 Dec 2026 – 07 Dec 2026  
**Study:** Digital I/O, pull resistors, debounce, PWM  
**Deliverable:** Nonblocking button-controlled LED dimmer

- [ ] **Day 008 · Tue, 01 Dec** — Confirm board model, pinout, 5 V/3.3 V logic and safe current. Re-run Blink. Explain pinMode, digitalRead, digitalWrite and common ground.
- [ ] **Day 009 · Wed, 02 Dec** — Wire button with external pull-down (e.g. 10 kΩ when appropriate for board) and read through Serial. Verify released/pressed levels; compare with INPUT_PULLUP and inverted logic.
- [ ] **Day 010 · Thu, 03 Dec** — Wire an LED with a suitable series resistor. Make LED follow button and then toggle on one press. Observe repeated transitions using Serial; distinguish level from edge.
- [ ] **Day 011 · Fri, 04 Dec** — Implement delay-based debounce, then nonblocking millis()-based debounce with unsigned elapsed time. Test held button, rapid press and stable release.
- [ ] **Day 012 · Sat, 05 Dec** — Find PWM pins in board pinout. Fade LED using analogWrite and compare duty values 0, 64, 128, 255 where 8-bit PWM applies. Observe different brightness; explain PWM vs true analog voltage.
- [ ] **Day 013 · Sun, 06 Dec** — Integrate debounced button and nonblocking PWM states (off/low/medium/high). Document wiring, test at least 20 presses, capture a demo and commit.
- [ ] **Day 014 · Mon, 07 Dec** — Explain floating inputs, pull-up vs pull-down, debounce and duty cycle. Checkpoint: no duplicate toggles in observed test; record limitations rather than claiming universal reliability.

**Exit gate:** A physical button changes LED state reliably in the test; PWM is demonstrable.

**Interview recall:** Why is unsigned millis subtraction rollover-safe for bounded intervals?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 03 — Electronics and digital logic

**Dates:** 08 Dec 2026 – 14 Dec 2026  
**Study:** Ohm’s law, circuit measurement, components, gates  
**Deliverable:** Measured voltage divider and transistor LED switch

- [ ] **Day 015 · Tue, 08 Dec** — Learn voltage/current/resistance, power and series/parallel circuits. Calculate LED resistor using supply voltage, forward voltage and conservative target current.
- [ ] **Day 016 · Wed, 09 Dec** — Learn multimeter modes; measure resistance with power off; measure voltage in parallel. Build a low-voltage voltage divider and compare measured versus predicted output.
- [ ] **Day 017 · Thu, 10 Dec** — Study capacitors, RC time constants and diode polarity. Build a diode/LED circuit and inspect capacitor charging with safe low-voltage supply; no mains.
- [ ] **Day 018 · Fri, 11 Dec** — Study BJT/MOSFET switching, base/gate resistor and flyback diode concepts. Build a low-current transistor LED switch; compare GPIO drive vs load path.
- [ ] **Day 019 · Sat, 12 Dec** — Simulate gates, half-adder, D latch and flip-flop in Logisim/Falstad. Build or simulate a 555 astable LED blinker; check datasheet pinout and calculate approximate timing.
- [ ] **Day 020 · Sun, 13 Dec** — Document schematics, resistor selection, measured values, error percentage and one fault found with the meter. Fix wiring with power disconnected.
- [ ] **Day 021 · Mon, 14 Dec** — Review pull resistors, logic levels and Ohm’s law. Explain why 5 V may damage a 3.3 V-only pin. Check parts inventory for STM32.

**Exit gate:** Explain and safely measure a breadboard circuit; document actual versus expected readings.

**Interview recall:** Calculate resistor for 5 V, 2 V LED and 5 mA; explain a floating input.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 04 — C internals and Linux tools

**Dates:** 15 Dec 2026 – 21 Dec 2026  
**Study:** Qualifiers, memory layout, data representation, GCC/GDB  
**Deliverable:** Host-side register simulator with test suite

- [ ] **Day 022 · Tue, 15 Dec** — Learn fixed-width integer types, signed vs unsigned, integer promotions, overflow and endianness. Print sizes with sizeof; inspect bytes with unsigned char pointers.
- [ ] **Day 023 · Wed, 16 Dec** — Study scope, lifetime, linkage, static, extern, const, volatile. Write examples; explain why volatile is not atomic or a synchronization primitive.
- [ ] **Day 024 · Thu, 17 Dec** — Learn struct alignment, padding, unions and bit-fields (implementation-dependent layout). Use offsetof and sizeof; design explicit byte serialization instead of casting wire buffers.
- [ ] **Day 025 · Fri, 18 Dec** — Explore stack, heap, .text, .rodata, .data, .bss with nm, size, readelf and compiler -S. Use GDB breakpoints, step, next, print, x and backtrace.
- [ ] **Day 026 · Sat, 19 Dec** — Build a simulated control/status register module with mask macros, field extract/insert and error codes. Add assertions; use ASan/UBSan on host; fix deliberately introduced out-of-bounds bug.
- [ ] **Day 027 · Sun, 20 Dec** — Finish modular register simulator, Makefile and documentation. Repeat pointer exercises 24–30 (at least one allocation, one raw-byte helper, one function pointer) independently.
- [ ] **Day 028 · Mon, 21 Dec** — Checkpoint 1 (45–60 min): write set/clear/toggle/test from memory; demonstrate calculator, Arduino lab and circuit notes; take one light/rest session.

**Exit gate:** Pass C gate: build and debug a multi-file program, explain storage duration and safely manipulate fields.

**Interview recall:** Contrast const, volatile and static; explain stack vs heap and alignment.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 05 — ARM Cortex-M and STM32 bring-up

**Dates:** 22 Dec 2026 – 28 Dec 2026  
**Study:** Architecture, reset, memory map, HAL, SWD  
**Deliverable:** STM32 HAL blink with debugger evidence

- [ ] **Day 029 · Tue, 22 Dec** — Identify exact STM32 part, core, board revision, pinout, reference manual and datasheet. Learn R0–R15, SP, LR, PC, xPSR and Thumb basics.
- [ ] **Day 030 · Wed, 23 Dec** — Install or verify STM32CubeIDE/CubeMX, ST-LINK access and ARM compiler. Create board project, inspect clock configuration and generated files. On Ubuntu check USB permissions if probe not detected.
- [ ] **Day 031 · Thu, 24 Dec** — Flash HAL Blink using onboard LED; connect with SWD debugger, halt at main and step through initialization. Save working configuration and terminal/debug capture.
- [ ] **Day 032 · Fri, 25 Dec** — Read startup assembly, vector table, Reset_Handler, .data copying and .bss zeroing; inspect map file and linker script without modifying addresses blindly.
- [ ] **Day 033 · Sat, 26 Dec** — Inspect RCC and GPIO chapters; trace HAL_GPIO_WritePin through implementation. Calculate GPIO mode field and identify board-specific LED pin and polarity.
- [ ] **Day 034 · Sun, 27 Dec** — Create project README with exact board, IDE/toolchain, flash steps, pin mapping and observed behavior. Measure blink timing with available tools.
- [ ] **Day 035 · Mon, 28 Dec** — Recall reset-to-main flow, memory-mapped registers and CPU/peripheral clock differences. Confirm debug access before bare-metal work.

**Exit gate:** Flash and debug the board reliably; identify correct reference manual and LED pin.

**Interview recall:** What happens before main? What is the vector table?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 06 — Bare-metal GPIO and register-level drivers

**Dates:** 29 Dec 2026 – 04 Jan 2027  
**Study:** RCC, MODER, ODR, IDR, BSRR, CMSIS  
**Deliverable:** Reusable STM32 GPIO module

- [ ] **Day 036 · Tue, 29 Dec** — Read board-specific RCC and GPIO register maps. Locate clock enable, mode, output type, pull-up/down and data registers. Write masks on paper.
- [ ] **Day 037 · Wed, 30 Dec** — Implement GPIO output init using CMSIS device headers; enable port clock before access. Set only intended mode bits and preserve other pins. Compare with HAL initialization.
- [ ] **Day 038 · Thu, 31 Dec** — Implement LED set/reset through BSRR where supported, rather than ODR read-modify-write for individual output changes. Observe actual LED response and explain atomicity limits.
- [ ] **Day 039 · Fri, 01 Jan** — Configure a button input; read IDR with a mask. Test pull configuration and polarity. Add nonblocking polling/debounce state machine.
- [ ] **Day 040 · Sat, 02 Jan** — Split gpio.c/gpio.h from main.c; use named constants and clear interfaces. Build host-testable debounce and mask functions. Document assumptions on board family and registers.
- [ ] **Day 041 · Sun, 03 Jan** — Demonstrate HAL versus register-level blink; inspect register values with debugger; add code comments linked to reference manual sections and commit.
- [ ] **Day 042 · Mon, 04 Jan** — Closed-notes: derive register masks; explain reserved bits, volatile access, read-modify-write and BSRR. Fix all unsafe hardcoded addresses.

**Exit gate:** GPIO driver works on board and preserves unrelated configuration fields.

**Interview recall:** Why is read-modify-write risky if another context writes the same register?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 07 — Interrupts and time-based state machines

**Dates:** 05 Jan 2027 – 11 Jan 2027  
**Study:** EXTI, NVIC, ISR, SysTick, concurrency  
**Deliverable:** Interrupt-driven button with deferred debounce

- [ ] **Day 043 · Tue, 05 Jan** — Learn polling vs interrupts, exception entry, NVIC enable/pending/priority and vector names. Identify EXTI line mapping for exact board.
- [ ] **Day 044 · Wed, 06 Jan** — Configure button EXTI with HAL first, trace generated handler and callback. Use a short ISR to set a flag or counter; avoid printf and blocking delay inside it.
- [ ] **Day 045 · Thu, 07 Jan** — Implement main-loop processing and debounce outside ISR. Compare events with polling implementation. Test presses, bounce and long holds.
- [ ] **Day 046 · Fri, 08 Jan** — Study shared ISR/main state, volatile limitations, atomic access and critical sections. Decide whether a flag, counter or queue fits; document event-loss behavior.
- [ ] **Day 047 · Sat, 09 Jan** — Implement a simple finite-state machine with nonblocking timing; add SysTick or timer tick as appropriate. Verify behavior during simultaneous LED updates.
- [ ] **Day 048 · Sun, 10 Jan** — Debug pending flags and priority settings; record 20 button events and observed duplicates/losses. Document timing and limitations.
- [ ] **Day 049 · Mon, 11 Jan** — Explain ISR latency, priorities, clearing interrupt flags and safe sharing. Review interrupt setup without copying generated code.

**Exit gate:** Button interrupt performs useful deferred work; ISR remains bounded and short.

**Interview recall:** What can go wrong if you call blocking UART inside an ISR?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 08 — Timers, PWM, ADC and clocks

**Dates:** 12 Jan 2027 – 18 Jan 2027  
**Study:** Clock tree, PSC/ARR/CCR, ADC conversion  
**Deliverable:** Sensor-controlled PWM dimmer

- [ ] **Day 050 · Tue, 12 Jan** — Learn clock tree, APB timer clock rules for your MCU, timer prescaler/ARR and up-counting. Calculate values for 1 kHz PWM and 50% duty on actual clock.
- [ ] **Day 051 · Wed, 13 Jan** — Configure PWM through HAL, check timer configuration and confirm LED brightness. Sweep duty 0–100% safely; examine frequency with analyzer if available.
- [ ] **Day 052 · Thu, 14 Jan** — Learn ADC resolution, reference, sampling time and source impedance. Connect potentiometer within permitted analog range and read raw ADC values.
- [ ] **Day 053 · Fri, 15 Jan** — Implement counts-to-voltage conversion; test 0, midscale and full-scale. If using LM35, check its supply/output datasheet and ADC range; otherwise use potentiometer only.
- [ ] **Day 054 · Sat, 16 Jan** — Combine ADC input and PWM output with simple moving average and nonblocking sample scheduling. Handle endpoint saturation and log data via debugger or existing serial.
- [ ] **Day 055 · Sun, 17 Jan** — Compare calculated versus observed timer frequency; document clock assumptions, conversion formula, tests and limitations. Commit sensor dimmer.
- [ ] **Day 056 · Mon, 18 Jan** — Checkpoint 2: explain Cortex-M reset, GPIO masks, interrupts, timer math and ADC resolution; rebuild one STM32 peripheral setup without tutorial.

**Exit gate:** Timer/ADC demo works; measured or calculated frequency and sampling assumptions are documented.

**Interview recall:** For edge-aligned upcounting, derive f = timer_clock / ((PSC+1)(ARR+1)).

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 09 — UART and ring buffers

**Dates:** 19 Jan 2027 – 25 Jan 2027  
**Study:** Serial framing, asynchronous I/O, circular queues  
**Deliverable:** UART console with interrupt-driven reception

- [ ] **Day 057 · Tue, 19 Jan** — Learn baud rate, start/stop bits, parity, full-duplex and logic-level UART vs RS-232. Check Nucleo virtual COM routing and serial terminal settings.
- [ ] **Day 058 · Wed, 20 Jan** — Configure UART and transmit a periodic message; implement echo. Use the proper TX/RX wiring/common ground if external adapter is necessary.
- [ ] **Day 059 · Thu, 21 Jan** — Write host-tested ring buffer (push/pop, head/tail, full/empty, wraparound). Specify overflow policy and capacity; test transitions.
- [ ] **Day 060 · Fri, 22 Jan** — Implement interrupt-driven RX feeding the buffer, main-loop parsing and transmit response. Keep ISR short; document single-producer/single-consumer synchronization.
- [ ] **Day 061 · Sat, 23 Jan** — Add commands such as LED ON/OFF/STATUS and bounded input length; handle malformed command, overflow and reconnect. Compare polling and interrupt receive.
- [ ] **Day 062 · Sun, 24 Jan** — Use serial capture or logic analyzer to inspect frames. Document baud, latency/throughput observations and error handling. Commit.
- [ ] **Day 063 · Mon, 25 Jan** — Recall UART framing, ring buffer wraparound and baud mismatch. Run independent test cases.

**Exit gate:** UART console accepts commands and handles invalid/overlong input without crashing.

**Interview recall:** How do you distinguish full and empty ring buffers?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 10 — I2C and OLED

**Dates:** 26 Jan 2027 – 01 Feb 2027  
**Study:** Open-drain bus, addressing, ACK, register access  
**Deliverable:** Minimal I2C OLED driver

- [ ] **Day 064 · Tue, 26 Jan** — Learn START/STOP, 7-bit address, read/write bit, ACK/NACK, repeated start and pull-ups. Check bus voltage and module onboard resistors.
- [ ] **Day 065 · Wed, 27 Jan** — Read exact OLED controller datasheet (e.g. SSD1306 only if that is the actual module). Identify address and command/data protocol. Wire with power off.
- [ ] **Day 066 · Thu, 28 Jan** — Implement bounded-timeout I2C transport functions using HAL first; verify address and one command. Avoid confusing shifted HAL address with the 7-bit address.
- [ ] **Day 067 · Fri, 29 Jan** — Implement minimal initialization and display buffer/command writes. Display a small text/bitmap; do not import a full graphics library before understanding transport.
- [ ] **Day 068 · Sat, 30 Jan** — Test invalid address, disconnected sensor/module and recovery; inspect ACK/NACK on analyzer if available. Add errors and return statuses to the interface.
- [ ] **Day 069 · Sun, 31 Jan** — Publish wiring, register/command references, screenshots and known limitations. Add mock transport tests on host for command sequences.
- [ ] **Day 070 · Mon, 01 Feb** — Recall I2C vs UART, pull-ups, repeated start and clock stretching. Explain chosen timeout and failure policy.

**Exit gate:** OLED receives correct data and missing-device errors are handled.

**Interview recall:** Why does I2C require pull-up resistors?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 11 — SPI and persistent EEPROM

**Dates:** 02 Feb 2027 – 08 Feb 2027  
**Study:** Clock modes, chip select, command sequences  
**Deliverable:** SPI EEPROM read/write driver

- [ ] **Day 071 · Tue, 02 Feb** — Learn MOSI, MISO, SCK, CS, full-duplex transfers, CPOL/CPHA and device-specific clock limits. Confirm EEPROM is actually SPI, not I2C.
- [ ] **Day 072 · Wed, 03 Feb** — Read exact EEPROM datasheet: opcodes, addressing, page boundaries, write enable and busy flags. Wire compatible voltage and CS pull state.
- [ ] **Day 073 · Thu, 04 Feb** — Implement status read and byte read/write; verify expected command sequence on analyzer. Respect write-cycle timing and page rules.
- [ ] **Day 074 · Fri, 05 Feb** — Add bounded block transfers, range checking, page-splitting and write-completion timeout. Host-test page splitting and serialization.
- [ ] **Day 075 · Sat, 06 Feb** — Store a small versioned config with explicit bytes and checksum/CRC if useful. Power-cycle and read back. Test invalid address and busy timeout.
- [ ] **Day 076 · Sun, 07 Feb** — Capture SPI transaction, document clock mode, timing and endurance constraints. Commit driver with test program.
- [ ] **Day 077 · Mon, 08 Feb** — Recall differences between I2C/SPI/UART, chip-select handling, page wrap and busy polling.

**Exit gate:** Verified data persistence after power cycle with valid range and timeout handling.

**Interview recall:** Explain CPOL/CPHA and why EEPROM page boundaries matter.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 12 — Sensor integration and DMA

**Dates:** 09 Feb 2027 – 15 Feb 2027  
**Study:** RTC, BCD, accelerometer, DMA, bus debugging  
**Deliverable:** Multi-sensor telemetry demo

- [ ] **Day 078 · Tue, 09 Feb** — Learn BCD and RTC register maps. Identify actual RTC module and compatible backup battery circuit. Implement BCD conversion and test invalid digits.
- [ ] **Day 079 · Wed, 10 Feb** — Wire RTC and OLED on I2C; verify addresses and pull-up combination. Read time registers; display time or print via UART.
- [ ] **Day 080 · Thu, 11 Feb** — Read accelerometer datasheet; configure scale/rate and read device ID and axis data. Convert signed raw samples using the documented scale; test negative readings.
- [ ] **Day 081 · Fri, 12 Feb** — Learn DMA transfer concepts, completion callbacks, buffer lifetime and alignment. Try UART TX DMA or ADC DMA on your STM32; compare CPU polling behavior.
- [ ] **Day 082 · Sat, 13 Feb** — Integrate RTC, sensor and UART with timed sampling; handle missing sensor without indefinite blocking. If short on time, prioritize one sensor plus reliable transport.
- [ ] **Day 083 · Sun, 14 Feb** — Capture a short serial CSV or logic trace; document sampling interval, error cases and DMA ownership. Commit integrated telemetry.
- [ ] **Day 084 · Mon, 15 Feb** — Checkpoint 3: justify UART/SPI/I2C choices, explain one complete wire transaction, demonstrate sensor failure handling and DMA basics.

**Exit gate:** At least one sensor and one display/serial path work; explain and demonstrate one DMA transfer.

**Interview recall:** Why must DMA buffers remain valid until transfer completion?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 13 — FreeRTOS foundations

**Dates:** 16 Feb 2027 – 22 Feb 2027  
**Study:** Tasks, scheduler, priorities, stacks, tick  
**Deliverable:** Independent periodic tasks

- [ ] **Day 085 · Tue, 16 Feb** — Learn why an RTOS differs from superloop scheduling, task states, preemption, tick and context switching. Read FreeRTOS task API documentation.
- [ ] **Day 086 · Wed, 17 Feb** — Create FreeRTOS project on supported STM32; confirm config, heap strategy and API naming (native API vs CMSIS wrapper). Create two tasks with different periods.
- [ ] **Day 087 · Thu, 18 Feb** — Use vTaskDelayUntil for periodic work where appropriate; observe LED/task timing. Compare busy loop vs blocked task; avoid starvation.
- [ ] **Day 088 · Fri, 19 Feb** — Inspect stack high-water marks and heap metrics; understand stack units for chosen API and config. Enable appropriate assertions/overflow hooks in a debug build.
- [ ] **Day 089 · Sat, 20 Feb** — Add a low-priority status task and test changes to priorities. Measure or log interval variation with clear method.
- [ ] **Day 090 · Sun, 21 Feb** — Document task table (name, period, priority, stack estimate), timing evidence and scheduling tradeoffs; commit.
- [ ] **Day 091 · Mon, 22 Feb** — Recall context switching, ready/blocked states and priority effects. Verify all tasks still run when one waits.

**Exit gate:** Two independent tasks work at distinct periods; stack and scheduling assumptions are explained.

**Interview recall:** Why should a task block instead of busy-waiting?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 14 — FreeRTOS queues and synchronization

**Dates:** 23 Feb 2027 – 01 Mar 2027  
**Study:** Producer/consumer, semaphores, mutexes  
**Deliverable:** Queued sensor/event pipeline

- [ ] **Day 092 · Tue, 23 Feb** — Learn queue item copy semantics, blocking timeouts and ownership. Build producer/consumer task pair with bounded queue.
- [ ] **Day 093 · Wed, 24 Feb** — Add button events or simulated sensor records. Use a suitable ISR-safe API when sending from ISR and request a context switch as required by port/API.
- [ ] **Day 094 · Thu, 25 Feb** — Learn binary/counting semaphores and mutexes; protect a shared UART or route all logging through one task. Never take a normal mutex in ISR.
- [ ] **Day 095 · Fri, 26 Feb** — Study priority inversion and inheritance; build a small controlled demo or trace. Explain why semaphores and mutexes are not interchangeable.
- [ ] **Day 096 · Sat, 27 Feb** — Test full queue, empty queue, slow consumer, simultaneous events and task timeouts. Define drop/backpressure policy and counters.
- [ ] **Day 097 · Sun, 28 Feb** — Document queue depth, ownership and synchronization model. Commit tested pipeline and observed output.
- [ ] **Day 098 · Mon, 01 Mar** — Explain when to use queue, semaphore, mutex or direct task notification. Review ISR API restrictions.

**Exit gate:** Producer/consumer handles overflow explicitly and shared resources are protected.

**Interview recall:** What happens if a high-priority task waits for a low-priority mutex holder?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 15 — RTOS integration and fault handling

**Dates:** 02 Mar 2027 – 08 Mar 2027  
**Study:** Race conditions, watchdog, latency, state machines  
**Deliverable:** Fault-aware RTOS sensor controller

- [ ] **Day 099 · Tue, 02 Mar** — Design three-task system: acquisition, processing/control, logging. Define data ownership, periods, queue depths, error states and heartbeat.
- [ ] **Day 100 · Wed, 03 Mar** — Integrate sensor read with bounded timeouts and validity flags; avoid one failed peripheral blocking all tasks. Test missing sensor.
- [ ] **Day 101 · Thu, 04 Mar** — Implement controller FSM with off/normal/fault states and safe low-voltage output behavior. Use assertions on pure transition logic.
- [ ] **Day 102 · Fri, 05 Mar** — Study watchdog purpose, reset cause and health supervision. If implementing on board, feed only after health checks; document debug behavior and recovery.
- [ ] **Day 103 · Sat, 06 Mar** — Inject faults (slow consumer, disconnected sensor, deliberately disabled mutex in safe demo); identify failure and fix. Measure task interval/queue overflow.
- [ ] **Day 104 · Sun, 07 Mar** — Write project architecture, task diagram, tests, fault behavior and demo. Commit RTOS controller baseline for Week 23.
- [ ] **Day 105 · Mon, 08 Mar** — Recall race conditions, deadlock avoidance, watchdog limitations and priority inversion. Rebuild smallest queue/mutex example independently.

**Exit gate:** RTOS controller reaches a defined fault state; test evidence covers at least three failures.

**Interview recall:** Why is feeding a watchdog from an unconditional timer interrupt weak supervision?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 16 — ESP32 and connectivity (focused)

**Dates:** 09 Mar 2027 – 15 Mar 2027  
**Study:** Wi-Fi, MQTT, reconnection, BLE/CAN/OTA overview  
**Deliverable:** MQTT sensor monitor; mid-plan buffer

- [ ] **Day 106 · Tue, 09 Mar** — First finish critical STM32/RTOS blockers. If on schedule, set up ESP-IDF or Arduino core for ESP32 and flash serial hello; check board voltage/pinout.
- [ ] **Day 107 · Wed, 10 Mar** — Connect Wi-Fi in station mode; log IP and events without storing real secrets in Git. Learn connection and retry states.
- [ ] **Day 108 · Thu, 11 Mar** — Learn MQTT broker/topics/QoS; use a local test broker if possible. Publish mock or sensor data, subscribe from Linux/Python; separate topic and payload design.
- [ ] **Day 109 · Fri, 12 Mar** — Add reconnect/backoff and bounded buffering; test broker unavailable and Wi-Fi disconnect. Use authenticated/TLS broker for remote deployment; local lab only for plaintext.
- [ ] **Day 110 · Sat, 13 Mar** — Optional: compare HTTP, MQTT, BLE GATT, CAN arbitration and OTA rollback conceptually. Implement a BLE advertisement only if core tasks and buffer are complete.
- [ ] **Day 111 · Sun, 14 Mar** — Document sensor monitor, reconnect behavior, credentials handling, local setup and screenshots. If catching up, record completed core RTOS work instead.
- [ ] **Day 112 · Mon, 15 Mar** — Checkpoint 4: FreeRTOS concepts, protocol choices and working demo. Do not move into Linux with unresolved critical C/RTOS fundamentals.

**Exit gate:** Core RTOS gate passed; MQTT monitor is a stretch if catch-up consumes the week.

**Interview recall:** Compare MQTT QoS 0/1/2 and explain why QoS does not automatically make an application exactly-once.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 17 — Linux systems programming

**Dates:** 16 Mar 2027 – 22 Mar 2027  
**Study:** Processes, threads, files, syscalls, Bash  
**Deliverable:** Linux serial/logging utility

- [ ] **Day 113 · Tue, 16 Mar** — Use existing Ubuntu; revise filesystem, permissions, pipes, redirection, grep/find and process tools. Write a Bash script to organize project logs.
- [ ] **Day 114 · Wed, 17 Mar** — Learn userspace/kernel boundary and syscalls. Implement a C file-copy utility using open/read/write/close; handle partial writes and errors.
- [ ] **Day 115 · Thu, 18 Mar** — Learn processes, fork/exec/wait conceptually and practically; build a small child-process example. Compare process vs thread address spaces.
- [ ] **Day 116 · Fri, 19 Mar** — Learn POSIX threads and mutex basics; make a shared counter safe and compare with FreeRTOS. Learn errno and perror.
- [ ] **Day 117 · Sat, 20 Mar** — Build Linux serial data logger or file-based simulation; use termios if real serial device available, handle errors and clean shutdown.
- [ ] **Day 118 · Sun, 21 Mar** — Run strace on utility, inspect syscalls, write Makefile and README. Add tests for empty input, permission error and normal copy/logging.
- [ ] **Day 119 · Mon, 22 Mar** — Recall permissions, file descriptors, blocking I/O and process/thread distinction. Keep kernel module work for isolated VM.

**Exit gate:** Userspace C tool handles errors and can explain its syscall trace.

**Interview recall:** Why can write return fewer bytes than requested?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 18 — Toolchain, debugging and architecture

**Dates:** 23 Mar 2027 – 29 Mar 2027  
**Study:** Compilation stages, ELF, cross-build, GDB  
**Deliverable:** Reproducible build/debug workflow

- [ ] **Day 120 · Tue, 23 Mar** — Revise preprocessing, compiling, assembling, linking. Generate .i/.s/.o and executable; inspect symbols and sections with readelf, nm and objdump.
- [ ] **Day 121 · Wed, 24 Mar** — Write Makefile for host module with dependencies and debug/release targets. Use compiler warnings, tests and sanitizer build; compare debug vs optimized output.
- [ ] **Day 122 · Thu, 25 Mar** — Use arm-none-eabi toolchain from supported STM32 setup to build a known project. Inspect ELF map, flash/RAM size and linker sections. Do not use host binary on MCU.
- [ ] **Day 123 · Fri, 26 Mar** — Practise GDB and STM32 SWD: breakpoint, watchpoint if available, memory examine, backtrace. Diagnose one real or planted bug and record evidence.
- [ ] **Day 124 · Sat, 27 Mar** — Automate known build/flash steps using a script with explicit target, error checks and board selection. If vendor tool lacks CLI, automate build only and document manual flash.
- [ ] **Day 125 · Sun, 28 Mar** — Document toolchain versions, exact commands, exit behavior and reproduce from clean checkout. Add simple host CI if feasible.
- [ ] **Day 126 · Mon, 29 Mar** — Recall ELF sections, linking, startup and debug symbols. Review cache/memory hierarchy, endian and interrupt concepts.

**Exit gate:** Reproducible host build and MCU build/flash procedure; debug log demonstrates a real diagnosis.

**Interview recall:** What is the difference between a linker error and compiler error?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 19 — Linux kernel modules

**Dates:** 30 Mar 2027 – 05 Apr 2027  
**Study:** Kernel headers, Kbuild, module lifecycle  
**Deliverable:** Hello World kernel module in a VM

- [ ] **Day 127 · Tue, 30 Mar** — Create isolated Linux VM and snapshot before experimenting. Confirm kernel version, matching headers, compiler and module loading permissions. No kernel experiments on essential host.
- [ ] **Day 128 · Wed, 31 Mar** — Study kernel vs userspace, module_init/module_exit, printk/pr_info, MODULE_LICENSE and Kbuild. Compile minimal module against exact running kernel headers.
- [ ] **Day 129 · Thu, 01 Apr** — Load/unload module inside VM; inspect kernel log and lsmod. Verify init and cleanup; do not disable security controls blindly if module loading is blocked.
- [ ] **Day 130 · Fri, 02 Apr** — Learn kernel memory allocation concepts (kmalloc/kfree), error returns, user/kernel pointers and sleepable context. Do not call libc functions in kernel code.
- [ ] **Day 131 · Sat, 03 Apr** — Add simple module parameter with documented permissions and safe value handling. Test invalid parameter, repeated load/unload and logs.
- [ ] **Day 132 · Sun, 04 Apr** — Write exact build/load/unload instructions with VM version and recovery notes. Commit source only, not generated kernel objects.
- [ ] **Day 133 · Mon, 05 Apr** — Explain why kernel bugs can crash whole system, how modules differ from firmware and what matching headers mean.

**Exit gate:** Module builds and loads/unloads cleanly in a disposable VM, or documented blocker with host userspace alternative.

**Interview recall:** Why can you not use printf or ordinary malloc in a kernel module?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 20 — Linux character device interfaces

**Dates:** 06 Apr 2027 – 12 Apr 2027  
**Study:** /dev, file_operations, user copies, synchronization  
**Deliverable:** Virtual character-device driver

- [ ] **Day 134 · Tue, 06 Apr** — Learn major/minor numbers, VFS, file_operations and miscdevice/cdev registration. Choose a simple miscdevice virtual buffer for first driver.
- [ ] **Day 135 · Wed, 07 Apr** — Implement module registration and deregistration with open/release as needed. Verify device node and permissions inside VM.
- [ ] **Day 136 · Thu, 08 Apr** — Implement bounded read/write using appropriate kernel user-copy helpers and file offsets. Return meaningful errors; avoid raw user-pointer dereference.
- [ ] **Day 137 · Fri, 09 Apr** — Add mutex around shared buffer in sleepable context; reason about concurrent access, partial reads, EOF and cleanup. Keep implementation minimal.
- [ ] **Day 138 · Sat, 10 Apr** — Write userspace C tester for read/write, empty buffer, oversized input, multiple opens and concurrent use. Run tests and check kernel logs.
- [ ] **Day 139 · Sun, 11 Apr** — Document API, permissions, memory ownership and error paths. Repeat load/unload, verify no unexpected logs; commit module and tester.
- [ ] **Day 140 · Mon, 12 Apr** — Checkpoint 5 (early, before GPIO stretch): explain syscall → VFS → driver callback, copy_to_user, synchronization and unload cleanup.

**Exit gate:** Virtual driver passes documented tests in VM without observed kernel faults.

**Interview recall:** Why does a driver need copy_from_user rather than blindly dereferencing a pointer?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 21 — Device tree and physical GPIO (conditional)

**Dates:** 13 Apr 2027 – 19 Apr 2027  
**Study:** Platform devices, GPIO descriptors, resource lifecycle  
**Deliverable:** GPIO driver prototype or documented virtual alternative

- [ ] **Day 141 · Tue, 13 Apr** — Learn device tree nodes, compatible, reg, GPIO properties and platform device/driver matching. Read Linux GPIO descriptor consumer documentation.
- [ ] **Day 142 · Wed, 14 Apr** — If supported Linux board is available: identify pinout, logic levels and kernel/device-tree setup. Use existing userspace GPIO tooling first to verify safe LED/button wiring. Otherwise use VM virtual driver.
- [ ] **Day 143 · Thu, 15 Apr** — Study devm_gpiod_get, descriptor direction, logical polarity and sleepable GPIO access. Outline probe/remove and error cleanup; use board-appropriate binding examples.
- [ ] **Day 144 · Fri, 16 Apr** — On actual board implement minimal supported platform GPIO path; verify button/LED with safe low-voltage circuit. Without board, add a simulated state provider to virtual driver and document device-tree example as untested.
- [ ] **Day 145 · Sat, 17 Apr** — Exercise failure paths (missing resources, invalid operations, repeated open/close/load/unload); review locking and lifetime. Avoid /dev/mem experiments on host.
- [ ] **Day 146 · Sun, 18 Apr** — Finish driver documentation with test matrix and distinction between tested hardware and design-only code. Commit; record blockers.
- [ ] **Day 147 · Mon, 19 Apr** — Recall MMIO vs kernel GPIO abstraction, platform matching and resource cleanup. Core exit: reliable virtual char driver; physical driver remains optional.

**Exit gate:** Virtual driver hardened; physical GPIO only counted if actually verified on suitable hardware.

**Interview recall:** How does device tree describe hardware without embedding board wiring into driver logic?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 22 — Portfolio build: STM32 data logger

**Dates:** 20 Apr 2027 – 26 Apr 2027  
**Study:** Architecture, SPI SD, FatFs, sensor sampling  
**Deliverable:** Integrated data logger v1

- [ ] **Day 148 · Tue, 20 Apr** — Write requirements and architecture: sensor → acquisition → bounded buffer → storage/serial. Select sampling period, file format, fault handling and compatible SD module.
- [ ] **Day 149 · Wed, 21 Apr** — Bring up SD card/FatFs using supported middleware example; verify mount/write/read on actual hardware. Document transport settings and card format assumptions.
- [ ] **Day 150 · Thu, 22 Apr** — Integrate previously tested UART and sensor modules; produce timestamped or elapsed-time records. Unit-test record formatting and bounds.
- [ ] **Day 151 · Fri, 23 Apr** — Add buffered logging, periodic sync, storage-full/write-error handling and explicit stop behavior. Avoid blocking acquisition indefinitely; use serial fallback if storage unavailable.
- [ ] **Day 152 · Sat, 24 Apr** — Run end-to-end test: at least 10 minutes logging, inspect records, test sensor disconnect and storage error with safe handling. Do not remove powered media unless supported.
- [ ] **Day 153 · Sun, 25 Apr** — Create schematic, README, architecture diagram, measured sample count/interval, demo video and test results. Commit reproducible v1.
- [ ] **Day 154 · Mon, 26 Apr** — Review tradeoffs, failure modes and data loss window. If SD hardware blocked, ship UART logger as verified baseline; label SD implementation pending.

**Exit gate:** Working logger with documented measurements and failure behavior; storage claims match actual test.

**Interview recall:** Why batch writes and sync periodically? What can be lost on power failure?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 23 — Portfolio build: FreeRTOS controller

**Dates:** 27 Apr 2027 – 03 May 2027  
**Study:** Integration, concurrency, reliability  
**Deliverable:** Polished RTOS smart controller

- [ ] **Day 155 · Tue, 27 Apr** — Review Week 15 design; finalize task and event architecture. Pick safe output (LED or low-voltage load) instead of mains relay wiring.
- [ ] **Day 156 · Wed, 28 Apr** — Integrate sensor acquisition, queue, controller and logger; specify priorities, stack budgets, queue capacity and periods.
- [ ] **Day 157 · Thu, 29 Apr** — Implement control FSM and safe defaults, timeouts and error counters. Unit-test transition table and normal/invalid sensor values.
- [ ] **Day 158 · Fri, 30 Apr** — Test overload, dropped events, sensor failure, restart and watchdog behavior if implemented. Observe timing with serial or analyzer.
- [ ] **Day 159 · Sat, 01 May** — Measure representative latency/interval and stack high-water marks; write exact method and results, not invented performance claims. Fix worst observed issue.
- [ ] **Day 160 · Sun, 02 May** — Produce complete README, circuit diagram, architecture/task diagram, demo and test report. Rehearse explaining queues and synchronization.
- [ ] **Day 161 · Mon, 03 May** — Rebuild a tiny task/queue example from memory. Check that project can be flashed from instructions by a fresh checkout.

**Exit gate:** RTOS controller is demonstrable and defensible with tests and fault-handling evidence.

**Interview recall:** How did you choose task periods, priorities and queue depth?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 24 — Portfolio hardening and elective buffer

**Dates:** 04 May 2027 – 10 May 2027  
**Study:** Driver QA, optional PCB/CAN, catch-up  
**Deliverable:** Polished Linux driver + elective only if ready

- [ ] **Day 162 · Tue, 04 May** — Prioritize unfinished core project or driver tests. Review error paths and resource cleanup; record all known limitations.
- [ ] **Day 163 · Wed, 05 May** — Run clean builds, host tests and driver VM repeat tests. Improve README and architecture diagrams; remove secrets/generated binaries.
- [ ] **Day 164 · Thu, 06 May** — Optional PCB: create simple low-voltage LED/sensor schematic in KiCad or existing PCB course tool; select footprints and run ERC. Do not fabricate unverified design.
- [ ] **Day 165 · Fri, 07 May** — Optional PCB layout: two-layer routing, decoupling, ground, trace widths and DRC; export Gerbers only if checks pass. Or study CAN framing, arbitration and termination instead.
- [ ] **Day 166 · Sat, 08 May** — Optional CAN hardware only with two compatible controllers and transceivers: low-voltage bench bus, appropriate termination, message exchange; otherwise conceptual/simulated demo. No vehicle connection.
- [ ] **Day 167 · Sun, 09 May** — Checkpoint 6: demonstrate two strongest projects without notes; record test evidence and close high-priority blockers. Skip optional labs if core work incomplete.
- [ ] **Day 168 · Mon, 10 May** — Rest and plan interview topics based on actual gaps. Archive elective notes as intro only if not fully tested.

**Exit gate:** At least two portfolio projects are clean, reproducible and tested; optional work never displaces core.

**Interview recall:** Explain one bug you diagnosed using actual evidence.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 25 — Interview preparation and computer architecture

**Dates:** 11 May 2027 – 17 May 2027  
**Study:** C internals, DSA, OS, buses, RTOS  
**Deliverable:** Technical interview notebook and mock round

- [ ] **Day 169 · Tue, 11 May** — Review pointers, arrays, qualifiers, memory layout, struct padding, UB, allocation and function pointers. Write five small C programs from memory.
- [ ] **Day 170 · Wed, 12 May** — Review architecture: CPU registers, ALU, fetch/decode/execute, pipelining, cache, SRAM/DRAM, MMU vs MPU, endianness and interrupts. Explain bare-metal vs Linux.
- [ ] **Day 171 · Thu, 13 May** — Review UART/SPI/I2C, timer/ADC/PWM formulas and datasheet interpretation. Solve two bit-mask/register scenarios and one ring-buffer question.
- [ ] **Day 172 · Fri, 14 May** — Review scheduling, synchronization, deadlock, priority inversion, driver lifetime, syscalls and kernel/user space. Explain differences between POSIX and FreeRTOS models.
- [ ] **Day 173 · Sat, 15 May** — DSA timed practice: arrays, strings, linked list, stack/queue, binary search and complexity; solve two easy/medium problems with tests in C or C++.
- [ ] **Day 174 · Sun, 16 May** — Mock interview: 15 min C, 15 min hardware/protocols, 15 min RTOS/Linux, 20 min project deep dive. Log questions missed and corrections.
- [ ] **Day 175 · Mon, 17 May** — Update one-page resume and pinned GitHub repos with verified claims only. Apply to relevant roles, review application tracker, rest.

**Exit gate:** Can explain core concepts and two projects without notes; identified weaknesses have a fix plan.

**Interview recall:** Describe a technical tradeoff from your own code and its measured effect.

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

### Week 26 — Final integration, buffer and applications

**Dates:** 18 May 2027 – 24 May 2027  
**Study:** Independent assessment, demos, resume, job search  
**Deliverable:** Application-ready evidence pack

- [ ] **Day 176 · Tue, 18 May** — Use first day to finish critical incomplete labs or retest weakest core topic. Rebuild pointer/mask utility without AI, then compare and fix.
- [ ] **Day 177 · Wed, 19 May** — Clean checkout and build/flash strongest STM32 project; run normal and fault tests. Fix instructions or reproducibility issues.
- [ ] **Day 178 · Thu, 20 May** — Retest FreeRTOS or Linux driver project; demonstrate one synchronization or resource-management choice and explain alternative.
- [ ] **Day 179 · Fri, 21 May** — Complete final assessment below; review any failed gate before claiming skill. Optional topics remain labelled introductory or pending.
- [ ] **Day 180 · Sat, 22 May** — Run second mock interview, refine one-page resume and project bullets using measured results; prepare concise self-introduction and project walkthrough.
- [ ] **Day 181 · Sun, 23 May** — Push final README, tagged releases if appropriate, demos and test evidence. Submit targeted applications; track status and follow-up dates.
- [ ] **Day 182 · Mon, 24 May** — Final retrospective: what is independently mastered, what remains guided, hardware limits, and next 90-day specialization plan. Rest.

**Exit gate:** Two strong projects and honest evidence, independent C assessment, resume and application workflow.

**Interview recall:** Can you reproduce and defend each resume claim without notes?

- [ ] Weekly definition of done satisfied; update actual hours and evidence in the journal.

---

## Practice banks

### A. Bitwise operators — 15 exercises (B01–B15)

Use unsigned operands for bit manipulation. Validate `scanf` results and shift counts. For fixed-width output use `<stdint.h>` and `<inttypes.h>` when appropriate. Bit 0 is the least significant bit. Unless otherwise stated, use an 8-bit displayed result; do not accidentally assume that C evaluates every expression in 8 bits (integer promotions apply). Predict results, write code, run tests and record mistakes. Do not use a built-in popcount or binary formatting function for these exercises.

| ID | Task and constraint | Example / edge case |
|---|---|---|
| B01 | Read two unsigned integers; print AND, OR, XOR using operators. | 12,10 → 8,14,6 |
| B02 | Convert an integer 0–255 to exactly 8 binary digits using shifts and AND. | 10 → 00001010; 0 → 00000000 |
| B03 | Invert all eight bits of `uint8_t`; explicitly constrain result to 8 bits. | 12 → 243; 255 → 0 |
| B04 | Shift an unsigned value left by k, validate k against type width. | 5,3 → 40; reject width or larger |
| B05 | Shift an unsigned value right by k; compare with integer division by powers of 2. | 21,2 → 5 |
| B06 | Detect odd/even with bit 0 instead of `%`. | 0 even, 7 odd |
| B07 | Count set bits by testing and shifting each bit. | 0xB5 → 5; 0 → 0 |
| B08 | Count set bits using `x &= x - 1u` until zero; compare with B07. | 255 → 8 |
| B09 | Determine whether a nonzero unsigned integer is a power of two. | 0 false, 1 true, 16 true, 18 false |
| B10 | Find the position of the lowest set bit; return a sentinel for 0. | 40 → 3 |
| B11 | Find the position of the highest set bit without floating-point logs. | 40 → 5 |
| B12 | Reverse exactly eight bits with a loop; handle leading zeroes. | 0x12 → 0x48 |
| B13 | Swap upper and lower nibbles of an 8-bit byte. | 0xAB → 0xBA |
| B14 | Rotate an 8-bit value left by k; handle k=0 or multiples of 8 without an invalid shift. | 0x81,1 → 0x03 |
| B15 | Pack two 4-bit values into a byte, then unpack them; reject values above 15. | 10,5 → 0xA5 → 10,5 |

### B. Bit masking — 15 exercises (M01–M15)

Use `uint32_t` for simulated registers unless otherwise specified. For single-bit masks use `UINT32_C(1) << k` only after validating `k < 32`. Preserve unrelated bits and handle the width-32 mask case explicitly; never shift a 32-bit value by 32. Test invalid inputs and do not mutate the register if rejected.

| ID | Task and constraint | Example / edge case |
|---|---|---|
| M01 | Set bit k without changing other bits. | 0x00,3 → 0x08 |
| M02 | Clear bit k without changing other bits. | 0x0F,2 → 0x0B |
| M03 | Toggle bit k. | 0x08,3 → 0x00 |
| M04 | Test whether bit k is set; return boolean. | 0x08,3 → true |
| M05 | Set several bits using a combined mask. | 0x00, mask 0x25 → 0x25 |
| M06 | Clear several bits using one mask. | 0xFF, mask 0x25 → 0xDA |
| M07 | Toggle several bits; verify applying twice restores input. | 0xA5 XOR 0x0F → 0xAA |
| M08 | Check whether all requested bits are set. | 0x0D, mask 0x05 → true |
| M09 | Check whether any requested bit is set; compare with M08. | 0x08, mask 0x0C → true |
| M10 | Extract a bit field of given start/width. | 0xB6, start 2, width 3 → 5 |
| M11 | Insert a field, preserving unrelated bits. | 0xFF, start 2, width 3, value 0 → 0xE3 |
| M12 | Construct a contiguous mask; validate start, width and full-width case. | start 4,width 3 → 0x70 |
| M13 | Simulate 8 GPIO output pins: set, clear, toggle and read through a menu. | set pin 7, read true; reject pin 8 |
| M14 | Simulate a 32-bit status register: READY bit 0, BUSY bit 1, ERROR bit 2; implement a state transition preserving reserved bits. | ready → busy → ready or error |
| M15 | Write generic register field read/write functions and a test suite covering zero/full masks, invalid widths, highest bit and preservation of unrelated bits. | width 32 at start 0 works; width 32 at start 1 rejected |

### C. C mini-challenges for Weeks 1–4 and ongoing revision

- [ ] `swapInt` / `swapChar`: separate correct types; test positive, negative and equal values.
- [ ] Min/max array: test singleton, descending order, all-equal, negatives and true array length; reject empty input.
- [ ] `calloc` demonstration: print zeros first, assign 1..n, print again, check allocation and free.
- [ ] Reimplement string length, comparison, reverse and copy; ensure terminator and destination capacity are handled.
- [ ] `malloc`/`realloc`: grow array without losing old pointer on failure, validate sizes and avoid leaks.
- [ ] Function-pointer dispatch table: use compatible function types, bounds check operator index, reject NULL and division by zero.
- [ ] `myMemcpy`: copy exactly n bytes, non-overlap contract, correct destination return, zero-length test with valid pointers.
- [ ] `myMemset`: understand byte fill versus integer value fill; test 0x00, 0xFF and 0xA5 using a byte buffer.
- [ ] Optional `myMemmove`: implement overlap-safe behavior for valid ranges of one backing array; test both copy directions; do not rely on relational comparison of unrelated pointers in portable C.
- [ ] Serialize a record into explicit bytes in a defined endianness and deserialize with length checks.
- [ ] Ring buffer: full/empty, wraparound, overflow policy and boundary tests; avoid dynamic allocation in the embedded version.
- [ ] Finite state machine: OFF → ON → FAULT → reset with clear input events; unit-test each transition.

### D. Core register patterns (study, then implement independently)

```c
#include <stdbool.h>
#include <stdint.h>

/* Precondition: k < 32. Validate external inputs before use. */
static inline uint32_t bit_mask(unsigned k)
{
    return UINT32_C(1) << k;
}

uint32_t set_bit(uint32_t reg, unsigned k)    { return reg | bit_mask(k); }
uint32_t clear_bit(uint32_t reg, unsigned k)  { return reg & ~bit_mask(k); }
uint32_t toggle_bit(uint32_t reg, unsigned k) { return reg ^ bit_mask(k); }
bool test_bit(uint32_t reg, unsigned k)       { return (reg & bit_mask(k)) != 0u; }
```

These are ordinary host-side values for training. Real peripheral registers may have special read/write semantics (write-one-to-clear, read-only, reserved bits or dedicated set/reset registers). Do not blindly apply read-modify-write to every hardware register. Consult the specific reference manual first. `volatile` ensures applicable accesses are observable to the compiler; it does not solve atomicity, inter-thread synchronization or every ordering issue.

### E. Modular calculator layout and minimum tests

```text
modular-calculator/
├── main.c          # Input, validation, output, dispatch
├── calc.c          # Arithmetic implementations
├── calc.h          # Public declarations + include guard
├── test_calc.c     # Host-side assertions (own main)
├── Makefile        # Build, test, clean
└── README.md
```

Define a consistent API for add, subtract, multiply and checked division. If using float-returning function pointers, reject zero division before dispatch and choose a documented input range. If using integer arithmetic, consider overflow before evaluating operations. Build the production and test executables separately. Verify addition `10 + 5 = 15`, subtraction `10 - 5 = 5`, multiplication `-3 * 4 = -12`, division `10 / 4 = 2.5`, zero-divisor rejection, invalid operator and invalid input. Compare floating-point values with a tolerance when necessary. Avoid putting function definitions with external linkage in headers.

## Portfolio specifications

Focus on two excellent projects and one solid additional system/driver project rather than many shallow demos. Project evidence must come from your own tests; no invented accuracy, latency, uptime or resume claims. The builds below reuse work from earlier weeks rather than starting from scratch.

### P1 — STM32 industrial-style data logger (core firmware project)

**Goal:** Acquire sensor data at a defined interval, produce structured records and persist them via SD card or deliver through UART as a verified fallback.

```text
Sensor(s) → ADC / I2C / SPI → Acquisition → Buffer → SD / FatFs
                                      └─────────→ UART diagnostics
```

- Minimum scope: one sensor, periodic sampling, timestamp or elapsed time, documented record format, bounded buffers, UART diagnostics and error state.
- Full scope: SD/FatFs storage, record batching/sync, configurable sample interval, optional RTC, disconnect handling and fault counters.
- Acceptance tests: normal 10-minute recording, compare expected/observed sample count, invalid sensor input, disconnected sensor, write/mount failure, restart, clean checkout build.
- Evidence: circuit diagram, exact board/pin map, build instructions, serial/CSV capture, measured interval, error behavior, demo video and test table.
- Resume template (fill after testing): “Developed an STM32 sensor logger with [interfaces], [verified storage method] and [measured sampling result], implementing [tested failure handling].”

### P2 — FreeRTOS smart controller (core real-time project)

**Goal:** Control a low-voltage output based on sensor and button events while maintaining responsive tasks and reliable communication.

```text
Sensor task ── data queue ──→ Controller task / FSM ──→ LED / low-voltage output
Button ISR ── event path ───→ Controller task
Status/error events ────────→ Logger task ──→ UART
```

- Minimum scope: three tasks, periodic acquisition, queue or task notification for events, clear data ownership, safe fault state, nonblocking timing, documented priorities and queue capacity.
- Extension: watchdog health supervision, stack metrics, timeout counters, mutex-protected shared interface where genuinely needed, recovery policy.
- Acceptance tests: normal response, long-held button, full queue, slow consumer, missing sensor, safe restart, timing observations, stack high-water measurement where supported.
- Evidence: task table, event diagram, timing method, test matrix, demo and code comments explaining design choices.
- Resume template: “Built a FreeRTOS controller on STM32 with [task count] tasks, [synchronization primitives] and [verified fault behavior]; measured [metric] under [test condition].”

### P3 — Linux character device driver (core low-level systems project)

**Goal:** Create a small loadable kernel module exposing a bounded virtual state/buffer through `/dev`; extend to actual GPIO only when appropriate hardware exists.

```text
Userspace test app → open/read/write/close → VFS → file_operations → Driver state
                                                               └─ GPIO (optional)
```

- Minimum scope: miscdevice or cdev registration, documented read/write semantics, safe user-copy helpers, error returns, locking, module lifecycle, userspace test application.
- Extension: platform driver/device tree and GPIO descriptor API on a supported board. Never claim this extension as working if only simulated.
- Acceptance tests: empty/read EOF behavior, valid input, oversized input, concurrent access, repeated load/unload, permissions/error handling, kernel logs free of observed unexpected faults in the test run.
- Evidence: VM/kernel version, exact build/load/unload commands, userspace test results, driver architecture and limitations, cleanup description.
- Resume template: “Implemented and tested a Linux [virtual/GPIO] character device using [interface], bounded user-space I/O and [synchronization], verified by [actual test cases].”

### P4 — ESP32 MQTT monitor (stretch connectivity project)

**Goal:** Publish periodic readings to a broker and recover from connectivity failure. Reuse Week 16.

- Scope: Wi-Fi station mode, MQTT topics, structured payload, reconnect/backoff, no credentials committed, Python or terminal subscriber.
- Tests: normal delivery, broker unavailable, Wi-Fi disconnect/reconnect, malformed reading, bounded buffering and credential handling.
- Evidence: serial log, subscriber capture, connectivity architecture, reconnect test and reproducible local setup.

### Definition of portfolio-ready

- [ ] Clean repository clone builds with documented tools and versions.
- [ ] No real Wi-Fi credentials, tokens or private data in the repository.
- [ ] Code is organized into understandable modules with explicit ownership and error handling.
- [ ] Wiring diagram or software architecture is accurate; include both if applicable.
- [ ] At least five documented tests per main project, with observed results and limitations.
- [ ] 60–120 second demo video or terminal recording, plus a concise README.
- [ ] Can explain design decisions, tradeoffs and a real bug without notes for 10 minutes.
- [ ] Resume bullet reflects what was built and measured, not what was planned.

## Parallel interview and architecture track

Begin this in Week 1 rather than postponing all interview work to May. Two or three 30–45 minute sessions per week are enough initially; increase in Weeks 25–26. It is included in the weekly hour estimate.

| Weeks | C / DSA practice | Architecture and systems concepts |
|---|---|---|
| 1–4 | Arrays, strings, pointer bugs, bit tricks, sorting/searching, Big-O | Binary/hex, gates, registers, memory layout, endian, alignment |
| 5–8 | Bit fields, FSMs, linked lists, stack/queue | CPU core, stack pointer, vector table, exceptions, memory-mapped I/O, clock tree |
| 9–12 | Ring buffer, parsing, serialization, binary search | Bus protocols, timing, DMA, peripheral interrupts |
| 13–16 | Producer/consumer, bounded queue, state transitions | RTOS scheduling, context switch, priority inversion, race conditions |
| 17–20 | File I/O, linked list, mutex, error handling | Linux processes/threads, virtual memory, MMU vs MPU, syscalls, VFS |
| 21–24 | Review weakest topics, two timed problems/week | Cache and memory hierarchy, device tree, resource lifetime, drivers |
| 25–26 | Mixed timed C/DSA problems, two mock interviews | Explain architecture of your own projects and tradeoffs |

Suggested DSA total: **40–60 carefully selected problems**, not hundreds rushed. Focus on C/C++ implementations, edge cases, complexity and explanation. For semiconductor/platform roles, spend extra time on C internals, architecture, OS and low-level debugging. GPU architecture, PCIe, x86 specifics, advanced C++ and kernel internals are next-stage topics, not implied by this introductory Cortex-M plan.

### Application timeline

- **Weeks 1–4:** Prepare a one-page resume draft, GitHub profile and simple application spreadsheet. Keep education and genuine projects visible.
- **Weeks 5–8:** Start applying to firmware/embedded internships and suitable graduate positions once you have a working MCU demo; do not wait for perfect readiness.
- **Weeks 9–16:** Add UART/I2C/SPI and RTOS projects as completed. Target embedded C, firmware, MCU and IoT positions. Aim for a few carefully tailored applications per week.
- **Weeks 17–24:** Add Linux systems and driver projects after validation; target junior systems/driver roles where prerequisites fit. Ask for technical feedback and referrals appropriately.
- **Weeks 25–26:** Refresh resume and pinned repositories; run mocks and follow up on applications. Continue applying after the roadmap ends.

Suggested tracker columns: Date | Company | Role | Skills matched | Link | Resume version | Status | Follow-up date | Interview notes. Do not invent job openings or assume a company hires for every listed specialty.

### Core interview question bank

1. Explain pointer vs array, pointer arithmetic, `void *`, double pointers and function pointers.
2. Why does `sizeof` differ for an array and pointer? What is one-past-end and when is dereference invalid?
3. Explain heap allocation, `realloc` failure, memory leaks, double free and dangling pointers.
4. Compare `memcpy`, `memmove` and `memset`. Why use unsigned char for byte access?
5. Explain `const int *`, `int *const`, static storage duration, external linkage and `volatile`.
6. Derive set/clear/toggle/check and field insert masks. What are signed shifts and integer promotions pitfalls?
7. Explain alignment, structure padding, endianness and serialization.
8. Walk through preprocessing, compiler, assembler, linker, startup code and `main`.
9. Explain Cortex-M registers, reset vector, NVIC, interrupts, polling and ISR restrictions.
10. Explain floating GPIO, pull resistors, debouncing and safe logic levels.
11. Derive PWM frequency/duty cycle and ADC resolution; describe timing errors.
12. Compare UART, SPI, I2C and CAN at a conceptual level; explain ACK/NACK and CPOL/CPHA.
13. Explain DMA, ring buffers and ownership of shared buffers.
14. Explain RTOS scheduling, task states, queues, mutexes, semaphores, starvation and priority inversion.
15. Compare process vs thread, user vs kernel space, virtual memory, MMU vs MPU.
16. Explain kernel modules, `file_operations`, user-copy helpers, device tree and cleanup.
17. Explain cache locality and latency, stack vs heap, and why a firmware design may avoid heap allocation.
18. Demonstrate how you diagnosed a real bug with GDB, SWD, serial logs or logic analyzer.
19. Explain one design tradeoff from each portfolio project and how you tested it.
20. Explain what you would improve next and what remains unverified.

## Testing and debugging playbook

### Host compilation on Ubuntu

Use GCC for host C code. These are example commands for a project with `main.c`, `calc.c`, `calc.h` and a separate `test_calc.c`. Adjust filenames and toolchain to your actual project.

```bash
# Install only if tools are missing on Ubuntu
sudo apt update
sudo apt install build-essential gdb git

# Compile/link in one command
cc -std=c17 -Wall -Wextra -Wpedantic -g -O0 main.c calc.c -o calculator
./calculator

# Separate translation units and link
cc -std=c17 -Wall -Wextra -Wpedantic -g -c main.c -o main.o
cc -std=c17 -Wall -Wextra -Wpedantic -g -c calc.c -o calc.o
cc main.o calc.o -o calculator

# Host tests with sanitizers (not MCU firmware flags)
cc -std=c17 -Wall -Wextra -Wpedantic -g -O1 \
   -fsanitize=address,undefined -fno-omit-frame-pointer \
   test_calc.c calc.c -o test_calc
./test_calc

# Inspect ELF sections and symbols
size calculator
readelf -S calculator
nm calculator
objdump -d calculator | less
```

When adding `-Wconversion` or `-Wshadow`, investigate warnings; do not silence them indiscriminately. AddressSanitizer and UBSan are host-side aids, not proofs of correctness. Microcontroller compilation uses target-specific startup files, linker scripts and flags generated/configured for the exact MCU.

### Example GDB session

```text
gdb ./calculator
(gdb) break main
(gdb) run
(gdb) next
(gdb) print a
(gdb) step
(gdb) backtrace
(gdb) info locals
(gdb) continue
(gdb) quit
```

For MCU debugging use SWD through the supported toolchain. Verify pin/clock configuration before changing driver logic. Inspect register values against the reference manual. Breakpoints can perturb timing; use serial, logic traces or timestamps for timing measurements.

### Debug systematically

1. Reproduce the smallest failing case; record inputs and expected/actual behavior.
2. Check power, common ground, pinout, clock and wiring before assuming a software defect.
3. Check compiler diagnostics, return values, buffer bounds and state transitions.
4. Use debugger or logic analyzer to gather evidence; isolate one variable at a time.
5. Fix the root cause, then add a regression test. Document what you learned.

### Kernel module build example (VM only, after Week 19 setup)

```makefile
obj-m += hello.o
```

```bash
# In the isolated VM; matching kernel headers must already be installed
uname -r
make -C /lib/modules/$(uname -r)/build M="$PWD" modules
sudo insmod hello.ko
lsmod | grep hello
sudo dmesg | tail -n 20
sudo rmmod hello
```

Do not load an unknown module, disable Secure Boot or kernel protections to force it, or run these on your main laptop without isolation. If module loading is blocked, use a disposable VM with supported configuration and document the limitation.

### Git workflow

```bash
# In the existing repository; check status before adding files
 git status
 git diff
 git add path/to/source.c path/to/README.md
 git commit -m "Implement and test bit masking helpers"
 git push
```

Check `.gitignore` and staged diff before pushing. Avoid committing credentials, private keys, build artifacts or unrelated coursework. A meaningful tested commit is more valuable than a large number of trivial commits.

### Project README template

```markdown
# Project name
## Problem and scope
## Hardware and tools (exact board, pinout, tool versions)
## Architecture and design decisions
## Wiring or interface specification
## Build, flash and run instructions
## Tests and observed results
## Demo (link or image)
## Known limitations and next steps
```

Test table: `Case | Input / setup | Expected | Observed | Pass/fail | Evidence`. Do not write Pass until the observation has been recorded.

## Resources

Use the actual hardware's datasheet and reference manual as the primary source. The official documentation landing pages below are starting points; exact product/board documentation and version compatibility must be checked at study time. This plan does not assume any particular paid course or tool version.

| Resource | Use for | When |
|---|---|---|
| [cppreference C](https://en.cppreference.com/w/c.html) | C semantics, types, conversions, standard library | All months |
| [GCC manuals](https://gcc.gnu.org/onlinedocs/) | Warnings, compilation, toolchain behavior | Weeks 1, 4, 18 |
| [GNU Make manual](https://www.gnu.org/software/make/manual/) | Targets, prerequisites, variables | Weeks 1, 18 |
| [GDB documentation](https://sourceware.org/gdb/documentation/) | Breakpoints, stepping, memory, backtrace | Weeks 4, 18 |
| [Arduino documentation](https://docs.arduino.cc/) | Board pinout, GPIO, PWM and reference examples | Week 2 |
| [All About Circuits textbook](https://www.allaboutcircuits.com/textbook/) | Circuit fundamentals | Week 3 |
| [Falstad circuit simulator](https://www.falstad.com/circuit/) | Circuit intuition and simulation | Week 3 |
| [Logisim Evolution](https://github.com/logisim-evolution/logisim-evolution) | Digital logic simulation | Week 3 |
| [STMicroelectronics](https://www.st.com/) | Exact STM32 datasheet, reference manual, errata, board user manual and tools | Weeks 5–15, 22–23 |
| [Arm developer documentation](https://developer.arm.com/documentation) | Cortex-M architecture and processor programming model | Weeks 5–8 |
| [FreeRTOS](https://www.freertos.org/) | Kernel API, tasks, queues, mutexes, configuration | Weeks 13–15, 23 |
| [ESP-IDF documentation](https://docs.espressif.com/projects/esp-idf/en/latest/) | ESP32 target-specific setup, Wi-Fi, MQTT, BLE | Week 16 |
| [MQTT specifications](https://mqtt.org/) | Publish/subscribe terminology and protocol | Week 16 |
| [Linux man-pages](https://man7.org/linux/man-pages/) | System calls, POSIX APIs, errors | Weeks 17–18 |
| [Linux kernel documentation](https://docs.kernel.org/) | Kbuild, driver APIs, GPIO, device tree | Weeks 19–21 |
| [Bootlin training materials](https://bootlin.com/training/) | Embedded Linux and kernel development courses/labs | Weeks 17–21 |
| [KiCad documentation](https://docs.kicad.org/) | Schematic, PCB layout, ERC/DRC | Optional Week 24 |
| [Git book](https://git-scm.com/book/en/v2) | Git workflow and history | All months |

**Course integration:** If you still have the Embedded C Masterclass, Embedded System Master Class, ARM Cortex-M4 Programming, PCB Design Workshop and IoT Master Class mentioned in your earlier roadmap, use their relevant modules alongside the scheduled labs. Avoid watching every course end to end before building. Read the component datasheet before copying a driver example. For lectures, Ben Eater and NPTEL digital electronics are useful search targets; no specific playlist completion is required.

## Final readiness assessment

At Week 26, answer and demonstrate without notes or AI. Score each gate 0 (not yet), 1 (needs help), or 2 (independent with correct explanation and tests). This is a personal assessment, not an industry certification or a hiring guarantee.

| Gate | Demonstration | Score (0–2) |
|---|---|---:|
| Embedded C | Write safe pointer/array code, memory helpers, bit fields and modular build | |
| Electronics | Wire safe GPIO circuit, calculate resistor and verify pin levels | |
| MCU architecture | Explain reset, vector table, memory map and clocking | |
| Register programming | Configure GPIO while preserving unrelated bits; explain reference manual | |
| Timing and interrupts | Demonstrate interrupt-driven lab, derive PWM timing, explain ADC | |
| Protocols | Implement/debug UART and at least one I2C and SPI transaction | |
| RTOS | Explain and demonstrate tasks, queues, mutexes and fault behavior | |
| Linux userspace | Build a C utility, handle syscalls/errors, debug with tools | |
| Driver basics | Demonstrate tested virtual kernel driver in VM, explain user-copy and cleanup | |
| Portfolio | Reproduce two project builds and defend real design choices/tests | |

**Personal target:** 16/20 or above, with no zero on the firmware core (first seven gates). If the Linux driver gate is blocked by environment, label it pending rather than claiming mastery. If a gate scores below 2, schedule targeted revision. For pure firmware applications prioritize MCU/RTOS proof; for Linux driver applications prioritize the driver gate and deeper OS work. A score alone does not establish job readiness.

### After May 2027 — next 90-day specialization (not in the six-month workload)

Choose one primary track based on applications and interests:

| Track | Next topics |
|---|---|
| Firmware | Advanced timers/DMA, bootloaders, watchdog/reset recovery, low power, secure firmware update, CAN if relevant |
| Embedded Linux / drivers | Device model, platform/I2C/SPI drivers, device tree, locking, kernel debugging, cross-compilation, Buildroot/Yocto fundamentals |
| Semiconductor / platform systems | Deeper computer architecture, OS internals, modern C++, caches, MMU, PCIe fundamentals, x86/ARM comparison, hardware validation concepts |
| IoT | TLS/provisioning, MQTT reliability, BLE GATT, OTA with rollback, power and connectivity testing |

Advanced PCB fabrication, full CAN project, BLE and production OTA were intentionally reduced from the original 54-week syllabus. Restore them after the core gates or as role-specific electives. This six-month path is not a complete hardware design or GPU engineering curriculum.

## Progress journal

Fill in each week. Keep actual hours, completed evidence and blockers visible rather than updating percentages from the calendar alone.

| Week | Hours | Core gate passed? | Commit / demo | Blocker or next action |
|---:|---:|---|---|---|
| 1 | | | | |
| 2 | | | | |
| 3 | | | | |
| 4 | | | | |
| 5 | | | | |
| 6 | | | | |
| 7 | | | | |
| 8 | | | | |
| 9 | | | | |
| 10 | | | | |
| 11 | | | | |
| 12 | | | | |
| 13 | | | | |
| 14 | | | | |
| 15 | | | | |
| 16 | | | | |
| 17 | | | | |
| 18 | | | | |
| 19 | | | | |
| 20 | | | | |
| 21 | | | | |
| 22 | | | | |
| 23 | | | | |
| 24 | | | | |
| 25 | | | | |
| 26 | | | | |

### Daily journal template

```text
Date:
Week / Day:
Actual focused hours:
What I implemented:
Test inputs and observed results:
Bug / root cause / fix:
What I can explain without notes:
What is still guided or incomplete:
Commit or evidence:
Next task:
```

### Final note

The plan is adapted from the user's original 54-week “Embedded Engineer Roadmap — Day-by-Day, 12+ Months” and the pointer exercise progress recorded on 24 November 2026. The schedule, exercise banks, milestones, safety rules and acceptance tests are the newly proposed accelerated version. The original comments indicating prior completion are treated as progress indicators, not proof of independent mastery. Hardware inventory, exact MCU variant, study availability and results remain to be verified by the learner.

**Start here: Week 01, Day 001 → B01. Learn bitwise operators, then masks. Keep building, testing and documenting.**
