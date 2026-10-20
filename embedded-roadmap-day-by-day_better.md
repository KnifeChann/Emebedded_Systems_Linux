# The Embedded Engineer Roadmap — Day-by-Day, 12+ Months (54 Weeks)

**Companion to `embedded-roadmap-12-months.md`.** Same phases, same projects, broken down into a daily schedule so you always know exactly what to open your laptop and do. ~15 hrs/week, following the Mon–Sun rhythm: Theory → Coding → Hardware → Theory/Debug → Build → Ship → Revise.

**What's new in this version (v2):** this revision adds two built-in buffer weeks (after Phase 5 and after Phase 9 — the two most likely places to overrun), a shippable-output checklist on every single week, a 4-week cumulative checkpoint/self-test reminder, a lightweight testing habit for pure-function code, and a resume-bullet callout at the end of every phase so your portfolio narrative grows continuously instead of only getting written at the end. Total runtime is now 54 weeks (~12.5 months) instead of a tight 52.

**How to use this doc:** Work top to bottom. Don't skip ahead even if a week looks light — finishing a phase properly beats rushing to the next one. The two buffer weeks exist specifically so an overrun (expected especially in Phase 9) doesn't force you to compress the next phase — use them, don't feel guilty about needing them.

---

<!-- ## Phase 0 — Setup (Pre-Week)

### Day 0–2 — Environment Setup

| Day | Task |
|---|---|
| Day 0 | Install VS Code, GCC via WSL + Ubuntu, Git, create GitHub account. Create your `embedded-journey` repo. |
| Day 1 | Install STM32CubeIDE, STM32CubeMX, a serial terminal (Tera Term or PuTTY). | -->
<!-- | Day 2 | Install Logisim Evolution, bookmark the Falstad circuit simulator (browser-based). Order your Arduino Uno clone + basic LED/resistor kit + multimeter (~₹500) so it arrives by Week 1. | -->

**Outcome:** dev environment ready, first commit pushed (even if it's just a README). Move to Week 1 once hardware has shipped or by Day 3, whichever comes first.

---

## Phase 1 — C Foundations + First Blink (Weeks 1–3)

### Week 1 — C Core + First Blink  `Phase 1`

*Hardware kickoff week — motivation matters, so we touch hardware from Day 1 even before deep C knowledge.*

| Day | Focus | Task |
|---|---|---|
<!-- | Mon | Theory | Variables, data types, operators, control flow (if/else, switch). |
| Tue | Coding | Write 10 of your 20 small C programs (calculators, pattern printers, basic string ops) covering today's and yesterday's topics. | -->
<!-- | Wed | Hardware Lab | Unbox the Arduino Uno clone, install Arduino IDE, run the built-in Blink example to confirm the board works. | -->
<!-- | Thu | Theory + Debugging | Loops (for/while/do-while) and functions — parameters, return values, scope. | -->
<!-- | Fri | Build | Modify Blink to your own timing pattern using `digitalWrite` — no libraries, just registers-via-Arduino-abstraction for now. This is pure dopamine, not firmware complexity yet. | -->
<!-- | Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. | -->
<!-- | Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What's the difference between `=` and `==`? What does a function's return type control? Why does C need explicit variable declaration? Keep this day light — burnout kills 12-month plans. | -->

<!-- **This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why) -->

### Week 2 — Pointers, Arrays, Strings  `Phase 1`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Pointers: declaration, dereferencing, pointer arithmetic. This is THE most important C topic for embedded — don't rush it. |
| Tue | Coding | 15 of your 30 pointer-focused problems: swap via pointers, pointer to array traversal, basic string reversal without library functions. |
| Wed | Hardware Lab | Wire a push-button to a digital input pin with a pull-down resistor. Read its state in code. |
| Thu | Theory + Debugging | Arrays vs pointers, string handling in C (no built-in string type — it's just a char array). |
| Fri | Build | Button input + LED: press button, LED turns on. Then add basic debouncing (a simple delay-based check) and understand *why* debouncing is needed — you'll see the flicker without it. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What is `*ptr` doing? What's the relationship between array indexing (`arr[i]`) and pointer arithmetic (`*(arr+i)`)? Why is debouncing necessary? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 3 — Structs, Bitwise Ops, Modular C  `Phase 1`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Structs, enums, typedef — organizing related data. |
| Tue | Coding | Remaining 15 pointer problems. Then start the calculator project: split into `main.c`, `calc.c`, `calc.h`. |
| Wed | Hardware Lab | Confirm PWM pins on your Arduino, connect an LED through a resistor to a PWM-capable pin. |
| Thu | Theory + Debugging | Bitwise operators (&, |, ^, ~, <<, >>), macros, and header files / multi-file compilation. |
| Fri | Build | Finish the command-line calculator (multi-file, modular). Separately: PWM-based LED fade using `analogWrite` — observe how duty cycle maps to perceived brightness. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What's the difference between a struct and a union? What does `volatile` do, and why does embedded C specifically need it? Show a bit-masking example to set/clear a single bit. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)
- [ ] Write at least 3 unit tests for pure functions in your calculator project (no hardware dependency) — this habit compounds fast.

**Milestone check:** You can write modular, multi-file C, understand pointers cold, and have blinked/faded/read a button on real hardware. This is the foundation — everything else builds on it.

**Phase wrap-up — resume bullet:** *Built modular embedded C utilities with unit-tested pure logic, applying pointer-based memory manipulation and bitwise operations for register-level programming readiness.*

---

## Phase 2 — Electronics Fundamentals (Weeks 4–5)

### Week 4 — Circuits & Components  `Phase 2`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Voltage, current, resistance, Ohm's law, series/parallel circuits. Watch 2–3 Ben Eater videos for physical intuition. |
| Tue | Coding | No coding today — instead, work through NPTEL Digital Electronics (IIT Kharagpur) intro lectures, take notes. |
| Wed | Hardware Lab | Build a voltage divider on a breadboard. Measure actual voltages with your multimeter and compare to calculated values. |
| Thu | Theory + Debugging | Capacitors (what they're for), diodes, transistors as switches. |
| Fri | Build | Build an LED+resistor circuit from scratch (no Arduino) — calculate the correct resistor value yourself from the LED's forward voltage and desired current, then verify with the multimeter. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: State Ohm's Law. Why does an LED need a series resistor — what happens if you skip it? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 4):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 5 — Logic + Pull Resistors + Analog Blinker  `Phase 2`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Binary/hex number systems, logic gates (AND/OR/NOT/XOR), flip-flops. |
| Tue | Coding | Simulate AND/OR/XOR gates and a basic flip-flop in Logisim Evolution. No embedded code this week — pure logic. |
| Wed | Hardware Lab | Breadboard a 555-timer astable circuit (LED blinker) using a datasheet you look up yourself, not a copy-paste schematic. |
| Thu | Theory + Debugging | Pull-up vs pull-down resistors — this trips up everyone, understand it cold before moving on. |
| Fri | Build | Finish and debug the 555-timer LED blinker — pure analog/digital logic, zero code. If it doesn't blink, debug with the multimeter, not guesswork. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Difference between a pull-up and a pull-down resistor — when do you use each? What does a flip-flop store that a logic gate doesn't? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You can read a basic schematic, reason about a circuit without code as a crutch, and you understand pull resistors — a concept that will come up in nearly every future GPIO discussion.

**Phase wrap-up — resume bullet:** *Designed and debugged discrete analog/digital circuits (555-timer blinker, voltage dividers) with datasheet-driven component selection.*

---

## Phase 3 — ARM Cortex-M & STM32 (Weeks 6–10)

**Buy before Week 6:** STM32 Nucleo board, breadboard, LEDs, resistors, jumper wires, push buttons (~₹1,500–2,000).

*This is where the Embedded System Master Class and ARM Cortex M4 Programming courses slot in — work through their register-level modules alongside these weeks rather than only using Arduino-style abstractions.*

### Week 6 — STM32 Blink (HAL, then bare-register)  `Phase 3`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | ARM Cortex-M architecture basics: core registers, memory map, vector table. |
| Tue | Coding | Set up an STM32CubeIDE project via CubeMX. Generate HAL blink code, read through every generated line before you flash it. |
| Wed | Hardware Lab | Wire the Nucleo board's user LED / an external LED with correct current-limiting resistor. |
| Thu | Theory + Debugging | GPIO registers on STM32 — what CubeMX's HAL code is actually abstracting underneath. |
| Fri | Build | Blink an LED using HAL first. Then rewrite the same blink using direct register writes (GPIOx->ODR, no HAL calls) and compare. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What's in a vector table? Name three things that happen between power-on and your `main()` running. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 7 — Interrupts  `Phase 3`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Polling vs interrupts — tradeoffs, when each is appropriate. |
| Tue | Coding | Work through the ARM Cortex M4 course's interrupt module in parallel with today's topic. |
| Wed | Hardware Lab | Wire an external push button to an EXTI-capable pin on the Nucleo. |
| Thu | Theory + Debugging | NVIC basics, interrupt priorities, ISR structure on Cortex-M. |
| Fri | Build | Button-triggered interrupt that toggles an LED — no polling loop. Add an ISR-safe way to avoid missed presses (debounce logic outside the ISR). |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why is polling wasteful in most cases? What should you avoid doing inside an ISR, and why? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 8 — UART  `Phase 3`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | UART fundamentals: baud rate, start/stop bits, framing. |
| Tue | Coding | Configure UART in CubeMX, write a minimal `printf`-over-UART redirect for debug output. |
| Wed | Hardware Lab | Connect the Nucleo's ST-Link virtual COM port to your serial terminal (Tera Term/PuTTY). |
| Thu | Theory + Debugging | Clock configuration basics — why UART needs the clock tree set up correctly to hit the right baud rate. |
| Fri | Build | UART 'hello world': STM32 sends a message every second; extend it to echo back whatever you type in the terminal. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What happens if sender and receiver baud rates don't match? What's a framing error? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 8):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 9 — PWM  `Phase 3`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Timers on STM32: prescaler, auto-reload register, how PWM frequency and duty cycle are derived from them. |
| Tue | Coding | Calculate prescaler/ARR values by hand for a target PWM frequency before letting CubeMX generate them — then verify CubeMX agrees with you. |
| Wed | Hardware Lab | Wire an LED to a timer-capable PWM pin. |
| Thu | Theory + Debugging | Debugging a timer configuration that isn't producing the frequency you expect. |
| Fri | Build | PWM LED dimmer — smoothly ramp brightness up and down. Bonus: control the dimming speed via a button. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: How do prescaler and ARR values combine to set PWM frequency? How does the compare register set duty cycle? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 10 — ADC  `Phase 3`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | ADC fundamentals: resolution, sampling rate, reference voltage. |
| Tue | Coding | Write ADC read code, convert raw ADC counts to actual voltage and then to temperature (for LM35) using the datasheet formula. |
| Wed | Hardware Lab | Wire a potentiometer and an LM35 to separate ADC channels. |
| Thu | Theory + Debugging | Reading analog sensors: potentiometer vs an analog temp sensor (LM35) — what changes electrically. |
| Fri | Build | Read both the potentiometer and LM35 over UART, print live values to your terminal every 500ms. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does ADC resolution (e.g. 12-bit) mean for the smallest voltage change you can detect? Why do you need a stable reference voltage? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)
- [ ] Write a small host-side unit test (run on your PC, not the MCU) for your ADC-counts-to-voltage/temperature conversion function.

**Milestone check:** You can write, flash, and debug bare-metal-adjacent firmware on STM32 and explain what each register write does — this is the professional foundation the rest of the roadmap builds on.

**Phase wrap-up — resume bullet:** *Developed bare-metal and HAL-based STM32 firmware covering GPIO, interrupts, UART, PWM, and ADC, with register-level understanding beyond IDE-generated code.*

---

## Phase 4 — Communication Protocols (Weeks 11–14)

**Buy before Week 11:** DHT22, I2C OLED, ultrasonic sensor, EEPROM module, RTC module, accelerometer.

### Week 11 — UART Deep Dive + I2C OLED  `Phase 4`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | UART deeper dive: framing details, hardware vs software flow control, common pitfalls. |
| Tue | Coding | Read the OLED module's datasheet and I2C command set before touching any library — write your own minimal init sequence if the datasheet allows. |
| Wed | Hardware Lab | Wire the I2C OLED to STM32 I2C pins with correct pull-up resistors (or confirm the module has them onboard). |
| Thu | Theory + Debugging | I2C fundamentals: addressing, ACK/NACK, clock stretching. |
| Fri | Build | Get 'Hello World' displaying on the I2C OLED, driven from your own I2C read/write functions. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why does I2C need pull-up resistors on SDA/SCL but UART doesn't? What does clock stretching solve? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 12 — SPI + EEPROM  `Phase 4`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | SPI fundamentals: full-duplex, MOSI/MISO/SCK/CS, clock polarity and phase (CPOL/CPHA). |
| Tue | Coding | Read the EEPROM datasheet's command set (read/write/erase sequences) before coding. |
| Wed | Hardware Lab | Wire the SPI EEPROM module to STM32 SPI pins. |
| Thu | Theory + Debugging | Why SPI needs a separate chip-select line per device but I2C doesn't. |
| Fri | Build | SPI-based EEPROM read/write: write a small data structure, power-cycle the board, read it back to confirm persistence. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why is SPI generally faster than I2C? What do CPOL and CPHA control? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 12):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 13 — I2C RTC  `Phase 4`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Real-time clock modules: how they keep time through power loss (backup battery), BCD-encoded registers. |
| Tue | Coding | Write functions to read/write the RTC's time registers, converting BCD to decimal and back. |
| Wed | Hardware Lab | Wire the I2C RTC module (shares the I2C bus with your OLED — practice multi-device addressing). |
| Thu | Theory + Debugging | Reading a datasheet register map — practice on the RTC module specifically. |
| Fri | Build | Display live time-of-day on the OLED, sourced from the RTC over I2C. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why do many RTC chips store time in BCD instead of raw binary? How do you address two different I2C devices on the same bus? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 14 — Accelerometer + DMA Intro  `Phase 4`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Accelerometer basics: what raw axis data represents, sensitivity/scale settings. |
| Tue | Coding | Write the accelerometer's init sequence and a function to read and scale raw axis values. |
| Wed | Hardware Lab | Wire the I2C or SPI accelerometer (whichever your module uses). |
| Thu | Theory + Debugging | Brief DMA introduction — why you'd offload a data transfer from the CPU. |
| Fri | Build | Stream live accelerometer X/Y/Z values over UART, plot them (even a simple terminal-based plot or logged CSV) to see motion in real time. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why is exact-value comparison risky with accelerometer noise? What's the basic idea DMA is solving? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You've now implemented UART, SPI, and I2C from first principles, using real datasheets — not just tutorials. This datasheet-reading habit is the biggest gap most students never close, and you've closed it.

**Phase wrap-up — resume bullet:** *Implemented UART, SPI, and I2C peripheral drivers from datasheets for OLED, EEPROM, RTC, and accelerometer modules on STM32.*

---

## Phase 5 — RTOS / FreeRTOS (Weeks 15–18)

**Buy before Week 15:** USB logic analyzer clone (~₹600) — useful for RTOS-timing debugging.

### Week 15 — RTOS Concepts + Multi-Task Blink  `Phase 5`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | What an RTOS actually solves vs a bare-metal superloop. Tasks and priorities. |
| Tue | Coding | Add FreeRTOS to your STM32CubeIDE project via CubeMX, create two trivial tasks that each print to UART. |
| Wed | Hardware Lab | Wire two LEDs on separate GPIO pins. |
| Thu | Theory + Debugging | The scheduler: preemption, context switching, stack per task. |
| Fri | Build | Multi-task LED controller: two FreeRTOS tasks, each blinking its own LED at an independent rate, no shared state yet. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does the scheduler save and restore during a context switch? Why can't you just spawn unlimited tasks freely on a microcontroller? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 16 — Queues  `Phase 5`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Queues in FreeRTOS: producer/consumer pattern, blocking vs non-blocking sends/receives. |
| Tue | Coding | Implement a basic producer-consumer pair using `xQueueSend`/`xQueueReceive`. |
| Wed | Hardware Lab | Wire a button as the 'producer' trigger. |
| Thu | Theory + Debugging | Task priorities in practice — how a higher-priority task preempts a lower one. |
| Fri | Build | Producer-consumer project: a button-press task pushes events into a queue; a separate task consumes them and blinks an LED per event. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What happens if a queue is full and a task tries to send with a non-zero timeout? What's the difference between task priority and task order of creation? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 16):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 17 — Semaphores & Mutexes  `Phase 5`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Binary/counting semaphores vs mutexes — when to use which. |
| Tue | Coding | Modify the sensor scheduler project to protect a shared UART resource with a mutex instead of letting two tasks write to it directly. |
| Wed | Hardware Lab | Wire your LM35/DHT22 sensor from earlier phases if not already connected. |
| Thu | Theory + Debugging | Priority inversion — the classic interview topic — and how priority inheritance fixes it. |
| Fri | Build | Sensor scheduler: one periodic task reads the sensor, another logs to UART, synchronized safely via mutex/semaphore. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Explain priority inversion in your own words, then explain how priority inheritance resolves it. When would you pick a semaphore over a mutex? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 18 — Integration + Review  `Phase 5`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Review all three FreeRTOS projects — trace through what would break if priorities were swapped. |
| Tue | Coding | Deliberately introduce a bug (e.g. remove a mutex) into one project, observe the failure, then fix it and document what happened. |
| Wed | Hardware Lab | No new wiring — use existing setup for debugging practice. |
| Thu | Theory + Debugging | Common FreeRTOS bugs: stack overflow, forgetting `vTaskDelay`, priority inversion in practice. |
| Fri | Build | Polish and finalize all three FreeRTOS projects with clean READMEs — these are strong portfolio candidates later. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Full FreeRTOS review: tasks, queues, mutexes, semaphores, priority inversion — explain each without notes. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You understand not just RTOS syntax but *why* it exists and what it protects against — this is what separates 'used FreeRTOS in a tutorial' from 'understands concurrency on embedded.'

**Phase wrap-up — resume bullet:** *Built multi-task FreeRTOS applications on STM32 using queues, mutexes, and semaphores, with awareness of priority inversion and synchronization tradeoffs.*

---

### Week 19 — Buffer / Catch-Up Week

*Built-in slack after Phase 5 (FreeRTOS). No new material this week — this exists because dense phases (especially anything with kernel/driver work) commonly overrun, and compressing the next phase to compensate is how motivation breaks.*

| Day | Task |
|---|---|
| Mon–Wed | Finish anything unfinished from the last 4 weeks — an incomplete project, a skipped quiz, a messy README. |
| Thu | Re-attempt the quiz questions you got wrong across the last phase, from memory. |
| Fri | Pick your weakest topic from the last phase and rebuild the smallest possible demo of it from scratch, no notes. |
| Sat | Clean up all READMEs/commits from the last phase — this is also a good day to update your resume with the phase's resume bullet. |
| Sun | Full rest. Next phase starts fresh on Monday. |

If you're fully caught up already, use this week as extra rest, or get a head start on next phase's hardware shopping list.

---

## Phase 6 — Linux for Embedded (Weeks 20–23)

**Buy if budget allows:** Raspberry Pi (~₹3,000+). If not, WSL is genuinely sufficient for this phase.

### Week 20 — Linux Fundamentals  `Phase 6`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Core Linux commands: filesystem navigation, permissions, process management. |
| Tue | Coding | Write 5 short bash scripts practicing file operations, loops, and conditionals. |
| Wed | Hardware Lab | If you have a Raspberry Pi: flash Raspberry Pi OS, SSH into it. If not: confirm WSL is fully configured. |
| Thu | Theory + Debugging | Bash scripting basics: variables, loops, conditionals. |
| Fri | Build | GPIO control via Raspberry Pi (or, without a Pi, simulate the same logic against a remote STM32 target controlled over serial from WSL). |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does `chmod 755` actually set? What's the difference between a process and a thread at a basic level? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 20):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 21 — GCC, Makefiles  `Phase 6`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | GCC compilation stages: preprocessing, compilation, assembly, linking. |
| Tue | Coding | Take one of your Phase 1 multi-file C projects and build it manually with GCC flags before writing a Makefile for it. |
| Wed | Hardware Lab | No new hardware — pure toolchain day. |
| Thu | Theory + Debugging | Makefile syntax: targets, dependencies, variables, phony targets. |
| Fri | Build | Rebuild that same multi-file project entirely via a hand-written Makefile — no IDE involved. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does a Makefile target actually do? What's the difference between a dependency and a prerequisite in Make terms? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 22 — GDB Debugging  `Phase 6`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | GDB basics: breakpoints, stepping, inspecting variables and memory. |
| Tue | Coding | Deliberately write a C program with a bug (off-by-one, uninitialized pointer) and find it using GDB only — no print statements allowed. |
| Wed | Hardware Lab | No new hardware. |
| Thu | Theory + Debugging | Reading a backtrace to find where a crash originated. |
| Fri | Build | Debug a deliberately broken C program using GDB only: set breakpoints, step through, inspect variables, fix it. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: How do you set a breakpoint and inspect a variable in GDB? What does a segfault backtrace tell you? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 23 — Automation + Wrap-up  `Phase 6`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Combining bash + Make + GDB into a real workflow: build, flash, debug. |
| Tue | Coding | Write a bash automation script that builds and flashes your STM32 project (auto-build-and-flash). |
| Wed | Hardware Lab | Connect your Nucleo board for the flash step in the script. |
| Thu | Theory + Debugging | Review week: what's still fuzzy from Weeks 19-21? |
| Fri | Build | Finalize the auto-build-and-flash script — this becomes a genuinely useful daily tool for the rest of the roadmap. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Explain end-to-end: what happens from running your script to LED blinking on the board? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You can navigate Linux, script in bash, build with Make, and debug with GDB — the toolchain skills that separate hobbyists from engineers who ship.

**Phase wrap-up — resume bullet:** *Automated firmware build-and-flash workflows using Bash and Makefiles, with GDB-based debugging on Linux/embedded Linux targets.*

---

## Phase 7 — PCB Design (Weeks 24–26)

*This is where your PCB Design Workshop course (Orcad/Allegro) slots in directly — the concepts below transfer 1:1 even though the roadmap references KiCad. Mention both tools on your resume; KiCad is more common outside large firms in India, so keep both skills.*

*Useful differentiator, not a hard requirement. If you're behind schedule anywhere, this is the first phase to compress — not skip entirely, compress.*

### Week 24 — Schematic Capture  `Phase 7`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | KiCad/Orcad schematic capture basics: symbols, nets, hierarchical sheets. |
| Tue | Coding | No coding — instead build your component library for the project (LED controller): resistors, LEDs, connector footprints. |
| Wed | Hardware Lab | No physical wiring — this phase is design work. |
| Thu | Theory + Debugging | Component selection: choosing real, sourceable parts (not just placeholder symbols). |
| Fri | Build | Draft the schematic for a simple LED controller board (STM32-driven). |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What is a net in schematic terms? Why does component footprint matter as much as the schematic symbol? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 24):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 25 — PCB Layout  `Phase 7`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | PCB layout basics: trace width, clearance, layer stackup for a 2-layer board. |
| Tue | Coding | No coding — run your design through the tool's design rule check (DRC) and fix every violation. |
| Wed | Hardware Lab | No physical wiring. |
| Thu | Theory + Debugging | Design rules and why they exist — signal integrity and manufacturability. |
| Fri | Build | Lay out the PCB for the LED controller: place components, route traces, pass DRC cleanly. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why does trace width matter for current-carrying traces? What's the minimum clearance rule protecting against? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 26 — Sensor Breakout + Fab Prep  `Phase 7`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Preparing Gerber files for fabrication. |
| Tue | Coding | No coding — write the README explaining every design decision on the board (why this trace width, why this layout). |
| Wed | Hardware Lab | No physical wiring. |
| Thu | Theory + Debugging | Review: schematic-to-layout-to-fab pipeline end to end. |
| Fri | Build | Design a simple sensor breakout board (design only is fine — get it fabricated via JLCPCB/PCBWay if budget allows, ~₹500–1000 for a small batch). |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What information does a Gerber file set actually contain? What would you check before submitting a board for fab? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You have two designed PCBs (LED controller + sensor breakout) with clean documentation — a genuine portfolio differentiator most embedded candidates don't have.

**Phase wrap-up — resume bullet:** *Designed 2-layer PCBs from schematic to layout (KiCad/Orcad-Allegro) for an LED controller and sensor breakout board, fab-ready via JLCPCB/PCBWay.*

---

## Phase 8 — Advanced Embedded / Connectivity (Weeks 27–32)

**Buy before Week 26:** ESP32 dev board (~₹400).

*This is where your Internet of Things Master Class course slots in — work through it alongside these weeks.*

### Week 27 — ESP32 Setup + Wi-Fi Basics  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | ESP-IDF or Arduino-core setup for ESP32; differences from STM32 toolchain. |
| Tue | Coding | Get the ESP32 connected to your home Wi-Fi and printing its IP over serial. |
| Wed | Hardware Lab | Wire a sensor (DHT22 or LM35) to the ESP32. |
| Thu | Theory + Debugging | Wi-Fi station mode basics: connecting to an access point, handling connection events. |
| Fri | Build | Smart sensor node part 1: ESP32 reads the sensor and prints values over serial, confirms Wi-Fi connectivity is stable. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What's the difference between station mode and access point mode on ESP32? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 28 — HTTP / Cloud Dashboard  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | HTTP basics from a device's perspective: making a POST request with sensor data. |
| Tue | Coding | Write the HTTP client code on ESP32 to send sensor readings to your chosen endpoint. |
| Wed | Hardware Lab | Keep the sensor wiring from last week. |
| Thu | Theory + Debugging | Options for a quick dashboard: a simple self-hosted endpoint vs a free cloud IoT service. |
| Fri | Build | Smart sensor node part 2: sensor data now reaches a cloud dashboard or local server, updating live. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why might you choose MQTT over raw HTTP for frequent sensor updates? (You'll implement MQTT next week — this is priming the comparison.) Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 28):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 29 — MQTT  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | MQTT fundamentals: publish/subscribe, topics, QoS levels, broker role. |
| Tue | Coding | Set up a Python MQTT subscriber script on your laptop (this is where your Python skill finally gets used again). |
| Wed | Hardware Lab | Keep existing sensor wiring. |
| Thu | Theory + Debugging | Comparing MQTT to the HTTP approach from last week — tradeoffs in overhead and real-time behavior. |
| Fri | Build | MQTT temperature monitor: ESP32 publishes readings, your Python script subscribes and logs/prints them live. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does QoS 0 vs QoS 1 vs QoS 2 guarantee in MQTT? What role does the broker play? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 30 — BLE  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | BLE fundamentals: GATT, services, characteristics, advertising. |
| Tue | Coding | Write a minimal BLE advertising payload on ESP32 (e.g. broadcasting a sensor value in the advertisement). |
| Wed | Hardware Lab | No new wiring — reuse existing sensor. |
| Thu | Theory + Debugging | BLE vs Wi-Fi tradeoffs: power consumption, range, use cases. |
| Fri | Build | BLE beacon / BLE sensor broadcast: confirm you can see the advertisement on a phone BLE scanner app. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why is BLE lower power than classic Bluetooth or Wi-Fi? What is a GATT characteristic? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 31 — CAN Bus  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | CAN bus fundamentals: differential signaling, arbitration, message IDs, why it's used in automotive. |
| Tue | Coding | Read the CAN controller/transceiver datasheet for whichever module you're using with STM32. |
| Wed | Hardware Lab | Wire two STM32 boards each with a CAN transceiver, connected on a shared CAN bus with proper termination resistors. |
| Thu | Theory + Debugging | This is a strong signal for automotive-embedded roles specifically (Bosch/Continental/KPIT) — go deeper here if that's your target. |
| Fri | Build | Two-microcontroller CAN bus message exchange: Board A sends a sensor value, Board B receives and displays it. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: How does CAN arbitration decide which message wins when two nodes transmit simultaneously? Why does the bus need termination resistors? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 32 — OTA + Integration Review  `Phase 8`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | OTA (over-the-air) update concepts: how firmware updates safely without bricking a device (dual-bank / rollback ideas). |
| Tue | Coding | Read through an ESP-IDF OTA example (even if you don't fully implement it) to understand the flow. |
| Wed | Hardware Lab | No new wiring. |
| Thu | Theory + Debugging | Review week: consolidate Wi-Fi, MQTT, BLE, CAN — what's still unclear? |
| Fri | Build | Polish and document all four Phase 8 projects (sensor node, MQTT monitor, BLE beacon, CAN exchange) with clean READMEs. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why is a rollback mechanism critical for OTA updates? Full review: explain when you'd choose Wi-Fi/MQTT vs BLE vs CAN for a given product. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** You now have hands-on breadth across every major embedded connectivity protocol — this directly supports both general IoT roles and automotive-embedded roles.

**Phase wrap-up — resume bullet:** *Built IoT connectivity projects on ESP32 spanning Wi-Fi/HTTP, MQTT pub-sub, BLE advertising, and inter-MCU CAN bus messaging.*

**🔁 4-Week Checkpoint (Week 32):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

---

## Phase 9 — Device Drivers & Embedded Linux Internals (Weeks 33–39)

*Hardest phase in the roadmap. Expect overrun — that's normal, not failure. If you're a week or two behind by the end of Phase 9, that's fine, just keep going.*

### Week 33 — Memory-Mapped I/O  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Memory-mapped I/O concepts: how peripherals appear as memory addresses to the CPU. |
| Tue | Coding | Read `/dev/mem` concepts (conceptually — this is dangerous to do carelessly) and how tools like `devmem` work. |
| Wed | Hardware Lab | Use Raspberry Pi (or WSL if simulating). |
| Thu | Theory + Debugging | Reviewing this from a Linux userspace perspective vs the bare-metal register access you did in Phase 3. |
| Fri | Build | No project yet — this week is pure conceptual grounding for the driver work ahead. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What does 'memory-mapped' mean for a peripheral register from the CPU's point of view? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 34 — Kernel Modules Intro  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | What a kernel module is, how it differs from a userspace program. |
| Tue | Coding | Write and load the classic 'Hello World' kernel module — compile against your kernel headers, `insmod`, check `dmesg`. |
| Wed | Hardware Lab | Raspberry Pi or Linux VM with kernel headers installed. |
| Thu | Theory + Debugging | Basic kernel module structure: `init`/`exit` functions, `insmod`/`rmmod`. |
| Fri | Build | Get the hello-world module loading and unloading cleanly, logging to `dmesg` on each. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why can a bug in a kernel module crash the whole system, unlike a userspace program bug? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 35 — Character Devices  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Character device driver structure: major/minor numbers, file_operations struct. |
| Tue | Coding | Study an existing simple character driver example line by line before writing your own. |
| Wed | Hardware Lab | Raspberry Pi with a GPIO pin wired to something observable (LED or button). |
| Thu | Theory + Debugging | Reading Bootlin's embedded Linux training material on this topic. |
| Fri | Build | Start the character driver: register the device, implement `open`/`release` stubs. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What's the role of the `file_operations` struct? What's the difference between major and minor numbers? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 36 — GPIO from Kernel Space  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | GPIO subsystem in the kernel: how a driver requests and controls a GPIO pin. |
| Tue | Coding | Implement GPIO pin request/read logic inside your character driver. |
| Wed | Hardware Lab | Same GPIO wiring as last week. |
| Thu | Theory + Debugging | Debugging kernel code: `dmesg`, `printk` levels. |
| Fri | Build | Extend the character driver to read the GPIO pin state internally (not yet exposed to userspace). |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Why can't kernel code use `printf` — what does `printk` do differently? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 36):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 37 — Exposing to Userspace  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Implementing the `read` file operation to expose data to userspace via `/dev`. |
| Tue | Coding | Implement `read()` in your driver so `cat /dev/yourdriver` returns the GPIO pin state. |
| Wed | Hardware Lab | Same GPIO wiring. |
| Thu | Theory + Debugging | Intro to device tree — what problem it solves (hardware description without recompiling the kernel). |
| Fri | Build | Finish the character driver: read the GPIO pin state, expose via `/dev`, confirm with `cat` and a small userspace C program. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Walk through the full path from `cat /dev/yourdriver` to your driver's `read()` function being called. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 38 — Debugging + Hardening  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Common driver bugs: race conditions, forgetting to free resources on `exit`, bad error handling. |
| Tue | Coding | Add proper error handling and cleanup to your driver (module unload should leave no mess). |
| Wed | Hardware Lab | Same GPIO wiring. |
| Thu | Theory + Debugging | Review device tree basics again with fresh eyes now that you have a working driver. |
| Fri | Build | Stress-test the driver: load/unload repeatedly, try invalid operations, confirm it doesn't crash the system. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: What resources must a driver release in its `exit` function to avoid leaks across reloads? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 39 — Documentation + Wrap-up  `Phase 9`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Review the entire driver end to end — be ready to explain every line to a skeptical senior engineer. |
| Tue | Coding | Clean up code, add comments explaining the *why* behind non-obvious lines. |
| Wed | Hardware Lab | Final GPIO wiring check. |
| Thu | Theory + Debugging | Overrun buffer day — if you're behind from earlier weeks, use today to catch up rather than starting new material. |
| Fri | Build | Finalize the character driver project with a thorough README: what it does, kernel concepts used, how to build/load/test it. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Full Phase 9 review: memory-mapped I/O, kernel modules, character devices, device tree, GPIO subsystem. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)
- [ ] Add a userspace test program that exercises your driver's read path and checks the returned value against the actual GPIO state.

**Milestone check:** You've written and shipped a real Linux kernel driver — this alone puts you ahead of most embedded candidates at your experience level. This is legitimately hard; be proud of finishing it.

**Phase wrap-up — resume bullet:** *Wrote a Linux character device driver exposing GPIO state to userspace, covering kernel modules, device tree basics, and the file_operations interface.*

---

### Week 40 — Buffer / Catch-Up Week

*Built-in slack after Phase 9 (Device Drivers — the hardest phase, most likely to overrun). No new material this week — this exists because dense phases (especially anything with kernel/driver work) commonly overrun, and compressing the next phase to compensate is how motivation breaks.*

| Day | Task |
|---|---|
| Mon–Wed | Finish anything unfinished from the last 4 weeks — an incomplete project, a skipped quiz, a messy README. |
| Thu | Re-attempt the quiz questions you got wrong across the last phase, from memory. |
| Fri | Pick your weakest topic from the last phase and rebuild the smallest possible demo of it from scratch, no notes. |
| Sat | Clean up all READMEs/commits from the last phase — this is also a good day to update your resume with the phase's resume bullet. |
| Sun | Full rest. Next phase starts fresh on Monday. |

If you're fully caught up already, use this week as extra rest, or get a head start on next phase's hardware shopping list.

---

## Phase 10 — Portfolio Build (Weeks 41–50)

Five polished, resume-grade projects. Each needs: source code, circuit diagram, a README explaining *why* (not just what), and photos/video demo. **Pick 1–2 to make genuinely excellent** rather than all five mediocre — depth beats breadth in interviews.

### Weeks 41–42 — Project 1: Industrial IoT Data Logger

**What it is:** STM32 + SD card + multiple sensors + UART debug output

**Key focus this project reinforces:** SD card SPI interface, file system basics (FatFs), multi-sensor scheduling.

| Day | Focus | Task |
|---|---|---|
| Mon (Wk1) | Design | Sketch the architecture: block diagram, what talks to what, what data flows where. Write the README skeleton first — design docs before code. |
| Tue (Wk1) | Core coding | Implement the core data-acquisition or control logic. |
| Wed (Wk1) | Hardware | Wire and verify each hardware component individually before integrating. |
| Thu (Wk1) | Integration | Bring hardware and code together; expect this to be the buggiest day. |
| Fri (Wk1) | Build | Get the full end-to-end pipeline working, even roughly. |
| Sat (Wk1) | Debug + polish | Fix the rough edges from Friday. Commit progress. |
| Sun (Wk1) | Rest + review | Light review only. |
| Mon (Wk2) | Refine | Improve reliability — handle edge cases (sensor disconnect, Wi-Fi drop, etc). |
| Tue (Wk2) | Refine | Continue hardening; add any missing feature from the design doc. |
| Wed (Wk2) | Circuit diagram | Produce a clean circuit diagram (Fritzing, KiCad, or hand-drawn + photographed neatly). |
| Thu (Wk2) | Demo prep | Record a short demo video/GIF, take clear photos of the hardware. |
| Fri (Wk2) | Write-up | Write the full README: problem, design decisions and *why*, challenges hit, what you'd do differently. |
| Sat (Wk2) | Ship | Final push to GitHub. Mock-explain the project out loud to yourself or a friend as if in an interview. |
| Sun (Wk2) | Rest | Full rest before starting the next project. |

**This project's shippable output:**
- [ ] Commit pushed to `embedded-journey` on GitHub, in its own project folder
- [ ] Full README (problem, design decisions and why, challenges, what you'd change)
- [ ] Circuit diagram
- [ ] Demo photo/video
- [ ] One resume bullet drafted for this project

### Weeks 43–44 — Project 2: FreeRTOS Smart Home Controller

**What it is:** Multiple tasks, queues, sensors, relay control

**Key focus this project reinforces:** Applying every FreeRTOS concept from Phase 5 in one integrated system with real actuation (relay).

| Day | Focus | Task |
|---|---|---|
| Mon (Wk1) | Design | Sketch the architecture: block diagram, what talks to what, what data flows where. Write the README skeleton first — design docs before code. |
| Tue (Wk1) | Core coding | Implement the core data-acquisition or control logic. |
| Wed (Wk1) | Hardware | Wire and verify each hardware component individually before integrating. |
| Thu (Wk1) | Integration | Bring hardware and code together; expect this to be the buggiest day. |
| Fri (Wk1) | Build | Get the full end-to-end pipeline working, even roughly. |
| Sat (Wk1) | Debug + polish | Fix the rough edges from Friday. Commit progress. |
| Sun (Wk1) | Rest + review | Light review only. |
| Mon (Wk2) | Refine | Improve reliability — handle edge cases (sensor disconnect, Wi-Fi drop, etc). |
| Tue (Wk2) | Refine | Continue hardening; add any missing feature from the design doc. |
| Wed (Wk2) | Circuit diagram | Produce a clean circuit diagram (Fritzing, KiCad, or hand-drawn + photographed neatly). |
| Thu (Wk2) | Demo prep | Record a short demo video/GIF, take clear photos of the hardware. |
| Fri (Wk2) | Write-up | Write the full README: problem, design decisions and *why*, challenges hit, what you'd do differently. |
| Sat (Wk2) | Ship | Final push to GitHub. Mock-explain the project out loud to yourself or a friend as if in an interview. |
| Sun (Wk2) | Rest | Full rest before starting the next project. |

**This project's shippable output:**
- [ ] Commit pushed to `embedded-journey` on GitHub, in its own project folder
- [ ] Full README (problem, design decisions and why, challenges, what you'd change)
- [ ] Circuit diagram
- [ ] Demo photo/video
- [ ] One resume bullet drafted for this project

### Weeks 45–46 — Project 3: Smart Energy Meter

**What it is:** Current sensing, LCD/OLED display, optional MQTT reporting

**Key focus this project reinforces:** Current sensor calibration, real-time power calculation, optional cloud reporting from Phase 8.

| Day | Focus | Task |
|---|---|---|
| Mon (Wk1) | Design | Sketch the architecture: block diagram, what talks to what, what data flows where. Write the README skeleton first — design docs before code. |
| Tue (Wk1) | Core coding | Implement the core data-acquisition or control logic. |
| Wed (Wk1) | Hardware | Wire and verify each hardware component individually before integrating. |
| Thu (Wk1) | Integration | Bring hardware and code together; expect this to be the buggiest day. |
| Fri (Wk1) | Build | Get the full end-to-end pipeline working, even roughly. |
| Sat (Wk1) | Debug + polish | Fix the rough edges from Friday. Commit progress. |
| Sun (Wk1) | Rest + review | Light review only. |
| Mon (Wk2) | Refine | Improve reliability — handle edge cases (sensor disconnect, Wi-Fi drop, etc). |
| Tue (Wk2) | Refine | Continue hardening; add any missing feature from the design doc. |
| Wed (Wk2) | Circuit diagram | Produce a clean circuit diagram (Fritzing, KiCad, or hand-drawn + photographed neatly). |
| Thu (Wk2) | Demo prep | Record a short demo video/GIF, take clear photos of the hardware. |
| Fri (Wk2) | Write-up | Write the full README: problem, design decisions and *why*, challenges hit, what you'd do differently. |
| Sat (Wk2) | Ship | Final push to GitHub. Mock-explain the project out loud to yourself or a friend as if in an interview. |
| Sun (Wk2) | Rest | Full rest before starting the next project. |

**This project's shippable output:**
- [ ] Commit pushed to `embedded-journey` on GitHub, in its own project folder
- [ ] Full README (problem, design decisions and why, challenges, what you'd change)
- [ ] Circuit diagram
- [ ] Demo photo/video
- [ ] One resume bullet drafted for this project

### Weeks 47–48 — Project 4: Environmental Monitoring Station

**What it is:** ESP32, Wi-Fi, cloud dashboard

**Key focus this project reinforces:** Multi-sensor environmental data (temp/humidity/air quality), reliable Wi-Fi reconnection handling.

| Day | Focus | Task |
|---|---|---|
| Mon (Wk1) | Design | Sketch the architecture: block diagram, what talks to what, what data flows where. Write the README skeleton first — design docs before code. |
| Tue (Wk1) | Core coding | Implement the core data-acquisition or control logic. |
| Wed (Wk1) | Hardware | Wire and verify each hardware component individually before integrating. |
| Thu (Wk1) | Integration | Bring hardware and code together; expect this to be the buggiest day. |
| Fri (Wk1) | Build | Get the full end-to-end pipeline working, even roughly. |
| Sat (Wk1) | Debug + polish | Fix the rough edges from Friday. Commit progress. |
| Sun (Wk1) | Rest + review | Light review only. |
| Mon (Wk2) | Refine | Improve reliability — handle edge cases (sensor disconnect, Wi-Fi drop, etc). |
| Tue (Wk2) | Refine | Continue hardening; add any missing feature from the design doc. |
| Wed (Wk2) | Circuit diagram | Produce a clean circuit diagram (Fritzing, KiCad, or hand-drawn + photographed neatly). |
| Thu (Wk2) | Demo prep | Record a short demo video/GIF, take clear photos of the hardware. |
| Fri (Wk2) | Write-up | Write the full README: problem, design decisions and *why*, challenges hit, what you'd do differently. |
| Sat (Wk2) | Ship | Final push to GitHub. Mock-explain the project out loud to yourself or a friend as if in an interview. |
| Sun (Wk2) | Rest | Full rest before starting the next project. |

**This project's shippable output:**
- [ ] Commit pushed to `embedded-journey` on GitHub, in its own project folder
- [ ] Full README (problem, design decisions and why, challenges, what you'd change)
- [ ] Circuit diagram
- [ ] Demo photo/video
- [ ] One resume bullet drafted for this project

### Weeks 49–50 — Project 5: CAN Bus Communication Demo

**What it is:** Two MCUs exchanging real messages

**Key focus this project reinforces:** Polished version of your Phase 8 CAN project — strong signal specifically for automotive roles.

| Day | Focus | Task |
|---|---|---|
| Mon (Wk1) | Design | Sketch the architecture: block diagram, what talks to what, what data flows where. Write the README skeleton first — design docs before code. |
| Tue (Wk1) | Core coding | Implement the core data-acquisition or control logic. |
| Wed (Wk1) | Hardware | Wire and verify each hardware component individually before integrating. |
| Thu (Wk1) | Integration | Bring hardware and code together; expect this to be the buggiest day. |
| Fri (Wk1) | Build | Get the full end-to-end pipeline working, even roughly. |
| Sat (Wk1) | Debug + polish | Fix the rough edges from Friday. Commit progress. |
| Sun (Wk1) | Rest + review | Light review only. |
| Mon (Wk2) | Refine | Improve reliability — handle edge cases (sensor disconnect, Wi-Fi drop, etc). |
| Tue (Wk2) | Refine | Continue hardening; add any missing feature from the design doc. |
| Wed (Wk2) | Circuit diagram | Produce a clean circuit diagram (Fritzing, KiCad, or hand-drawn + photographed neatly). |
| Thu (Wk2) | Demo prep | Record a short demo video/GIF, take clear photos of the hardware. |
| Fri (Wk2) | Write-up | Write the full README: problem, design decisions and *why*, challenges hit, what you'd do differently. |
| Sat (Wk2) | Ship | Final push to GitHub. Mock-explain the project out loud to yourself or a friend as if in an interview. |
| Sun (Wk2) | Rest | Full rest before starting the next project. |

**This project's shippable output:**
- [ ] Commit pushed to `embedded-journey` on GitHub, in its own project folder
- [ ] Full README (problem, design decisions and why, challenges, what you'd change)
- [ ] Circuit diagram
- [ ] Demo photo/video
- [ ] One resume bullet drafted for this project

**Reminder:** it's genuinely fine to spend real depth-time on your two strongest projects and leave the remaining three at a solid-but-simpler state. One project you can defend for 20 minutes under tough questioning beats five you can only describe in two sentences.

---

## Phase 11 — Interview Prep (Weeks 51–54)

**Also running in parallel since ~Month 9:** light DSA practice, 30–45 min, 2–3x/week — you already have a DSA foundation, this is maintenance, not learning from scratch.

### Week 51 — C Internals + Architecture Review  `Phase 11`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | C internals deep review: pointers, memory layout (stack/heap/data/bss), volatile/const, structure padding. |
| Tue | Coding | Write out, from memory, answers to 10 common C-internals interview questions, then check yourself against references. |
| Wed | Hardware Lab | No new hardware. |
| Thu | Theory + Debugging | ARM Cortex-M architecture review: registers, vector table, interrupt handling. |
| Fri | Build | Pick your strongest portfolio project and rehearse explaining its architecture out loud, unscripted. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Explain structure padding with an example. What's stored on the stack vs the heap vs .bss? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 52 — Protocols + RTOS Review  `Phase 11`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | UART/SPI/I2C tradeoffs review — be ready to justify a protocol choice for a hypothetical scenario. |
| Tue | Coding | Answer 10 protocol/RTOS interview questions from memory, then verify. |
| Wed | Hardware Lab | No new hardware. |
| Thu | Theory + Debugging | RTOS concepts review: priority inversion, semaphores vs mutexes, scheduling. |
| Fri | Build | Rehearse your second-strongest project explanation. Practice answering 'why did you choose I2C over SPI here' style follow-ups. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Justify a protocol choice for: a sensor 10cm from the MCU needing high speed vs one 2m away on a shared bus. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**🔁 4-Week Checkpoint (Week 52):** Before starting next week, spend 30–45 min on a cumulative self-test covering the last 4 weeks (mix old quiz questions together, no notes) and record a 2-minute demo walkthrough of whatever you've built so far, even if rough. This catches retention gaps early — long plans usually fail from forgetting, not from lack of effort.

### Week 53 — Linux/GDB + Mock Interview Round 1  `Phase 11`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Linux/GDB review: build process, debugging methodology, common driver bugs. |
| Tue | Coding | Do one timed DSA problem under interview conditions (no notes, talk through your approach out loud). |
| Wed | Hardware Lab | No new hardware. |
| Thu | Theory + Debugging | Computer architecture basics review: memory hierarchy, how interrupts interact with the pipeline at a conceptual level. |
| Fri | Build | Full mock interview: technical questions across C, protocols, RTOS, plus one portfolio project deep-dive. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Self-review: where did you hesitate or go blank in the mock interview? Write those topics down for tomorrow. Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

### Week 54 — Final Review + Mock Interview Round 2  `Phase 11`

| Day | Focus | Task |
|---|---|---|
| Mon | Theory | Targeted review of exactly the weak spots identified in Week 51's mock interview. |
| Tue | Coding | One more timed DSA problem, same conditions as before. |
| Wed | Hardware Lab | No new hardware. |
| Thu | Theory + Debugging | Debugging methodology review: how you'd approach an unfamiliar bug report systematically. |
| Fri | Build | Second full mock interview, ideally with a different set of hardware-behavior 'why' questions. Update resume and portfolio READMEs with anything sharpened this week. |
| Sat | Finish + Ship | Complete the build, write the README (what it does, why you made each design choice), push to GitHub `embedded-journey` repo. |
| Sun | Revise + Quiz + Rest | Review the week's notes. Self-quiz: Full end-to-end self-assessment: can you defend every portfolio project and explain the hardware behavior underneath your code, not just what the code does? Keep this day light — burnout kills 12-month plans. |

**This week's shippable output (check off before moving on):**
- [ ] Commit pushed to `embedded-journey` on GitHub
- [ ] README updated for this week's build (what + why)
- [ ] One demo photo, short video, or terminal/serial-output capture saved
- [ ] Half-page of notes in your journal (what worked, what broke, why)

**Milestone check:** 54 weeks complete (~12.5 months, including your 2 built-in buffer weeks). You should now be able to explain not just what your code does, but why the hardware behaves the way it does under it — that's the actual bar for embedded roles, and it's the one this whole roadmap was built around.

---

## Quick Reference — Weekly Rhythm

| Day | Default Focus |
|---|---|
| Mon | Theory (1.5h) + practice problems (1h) |
| Tue | Coding (2.5h) |
| Wed | Hardware lab (2.5h) |
| Thu | Theory + debugging (2.5h) |
| Fri | Build project (2.5h) |
| Sat | Finish project + push to GitHub + README (3h) |
| Sun | Revision + quiz + rest (1–2h) |

**Course integration reminder:**

- Embedded C Masterclass → Weeks 1–3
- Embedded System Master Class + ARM Cortex M4 Programming → Weeks 6–10
- PCB Design Workshop (Orcad/Allegro) → Weeks 24–26
- Internet of Things Master Class → Weeks 27–32

**Buffer weeks:** Week 19 (after FreeRTOS) and Week 40 (after Device Drivers — the hardest phase).

**Checkpoints:** every 4th week (4, 8, 12, 16 … 52) ends with a short cumulative self-test + 2-minute demo recording — don't skip these, they're where retention actually gets checked.

**Resume bullets:** each phase closes with a ready-to-adapt resume bullet — collect these into a running draft resume as you go, don't wait until Week 54 to write it from scratch.


---

*Say **"Day 1"** any time to start, or name a specific week (e.g. "Week 15") to jump straight to it. Say **"quiz me"** before moving on from any week if you want me to test you live instead of self-checking.*
