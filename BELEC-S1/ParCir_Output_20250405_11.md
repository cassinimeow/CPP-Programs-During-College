# PARALLEL CIRCUIT

## [1] GIVEN:

$$
R_1 = 100100\Omega \quad R_2 = 320\Omega \quad R_3 = 390\Omega
$$

$$
V = 5V
$$

### MINIMUM:

$$
R_{1\text{min}} = 100100\Omega - (0.05 \times 100100\Omega) = 95095\Omega
$$

$$
R_{2\text{min}} = 320\Omega - (0.05 \times 320\Omega) = 304\Omega
$$

$$
R_{3\text{min}} = 390\Omega - (0.05 \times 390\Omega) = 370.5\Omega
$$

### MAXIMUM:

$$
R_{1\text{max}} = 100100\Omega + (0.05 \times 100100\Omega) = 105105\Omega
$$

$$
R_{2\text{max}} = 320\Omega + (0.05 \times 320\Omega) = 336\Omega
$$

$$
R_{3\text{max}} = 390\Omega + (0.05 \times 390\Omega) = 409.5\Omega
$$

---

## [2] REQUIRED:

$$
R_T \quad I_T \quad P_T
$$

$$
I_1 \quad I_2 \quad I_3
$$

$$
P_1 \quad P_2 \quad P_3
$$

---

## [3] FORMULA:

$$
\frac{1}{R_T} = \frac{1}{R_1} + \frac{1}{R_2} + \frac{1}{R_3}
$$

$$
I_T = \frac{V_T}{R_T}
$$

$$
P_T = I_T \times V_T
$$

---

## [4] SOLUTION:

### SOLVING FOR $R_T$ (Resistance):

$$
R_T = \frac{1}{\frac{1}{R_1} + \frac{1}{R_2} + \frac{1}{R_3}}
$$

$$
R_T = \frac{1}{\frac{1}{100100\Omega} + \frac{1}{320\Omega} + \frac{1}{390\Omega}}
$$

$$
R_T = 175.466530329036\Omega
$$

MINIMUM $R_{T\text{min}}$:

$$
R_{T\text{min}} = \frac{1}{\frac{1}{95095\Omega} + \frac{1}{304\Omega} + \frac{1}{370.5\Omega}}
$$

$$
R_{T\text{min}} = 166.693203812584\Omega
$$

MAXIMUM $R_{T\text{max}}$:

$$
R_{T\text{max}} = \frac{1}{\frac{1}{105105\Omega} + \frac{1}{336\Omega} + \frac{1}{409.5\Omega}}
$$

$$
R_{T\text{max}} = 184.239856845488\Omega
$$

---

### SOLVING FOR $I_T$ (Current):

$$
I_T = \frac{V_T}{R_T}
$$

$$
I_T = \frac{5V}{175.466530329036\Omega}
$$

$$
I_T = 0.0284954628704629A
$$

MINIMUM $I_{T\text{min}}$:

$$
I_{T\text{min}} = \frac{5V}{166.693203812584\Omega}
$$

$$
I_{T\text{min}} = 0.0299952240741714A
$$

MAXIMUM $I_{T\text{max}}$:

$$
I_{T\text{max}} = \frac{5V}{184.239856845488\Omega}
$$

$$
I_{T\text{max}} = 0.0271385360671075A
$$

---

### CHECKING FOR $V_T$:

$$
V_T = I_T \times R_T
$$

$$
V_T = 0.0284954628704629A \times 175.466530329036\Omega
$$

$$
V_T = 5V
$$

---

### SOLVING FOR $I_n$ (Individual Current):

**NOTE:** $V_T = V_1 = V_2 = V_3 = 5V$

$$
I_1 = \frac{V_1}{R_1} = \frac{5V}{100100\Omega} = 4.995004995005e-05A
$$

$$
I_2 = \frac{V_2}{R_2} = \frac{5V}{320\Omega} = 0.015625A
$$

$$
I_3 = \frac{V_3}{R_3} = \frac{5V}{390\Omega} = 0.0128205128205128A
$$

TOTAL OF INDIVIDUAL CURRENT:

$$
I_T = \sum I_n = I_1 + I_2 + I_3
$$

$$
I_T = 4.995004995005e-05A + 0.015625A + 0.0128205128205128A
$$

$$
I_T = 0.0284954628704629A
$$

MINIMUM $I_{n\text{min}}$:

$$
I_{1\text{min}} = \frac{V_1}{R_1} = \frac{5V}{95095\Omega} = 5.2578999947421e-05A
$$

$$
I_{2\text{min}} = \frac{V_2}{R_2} = \frac{5V}{304\Omega} = 0.0164473684210526A
$$

$$
I_{3\text{min}} = \frac{V_3}{R_3} = \frac{5V}{370.5\Omega} = 0.0134952766531714A
$$



$$
I_{T\text{min}} = 5.2578999947421e-05A + 0.0164473684210526A + 0.0134952766531714A
$$

$$
I_{T\text{min}} = 0.0299952240741714A
$$

MAXIMUM $I_{n\text{max}}$:

$$
I_{1\text{max}} = \frac{V_1}{R_1} = \frac{5V}{105105\Omega} = 4.75714761429047e-05A
$$

$$
I_{2\text{max}} = \frac{V_2}{R_2} = \frac{5V}{336\Omega} = 0.0148809523809524A
$$

$$
I_{3\text{max}} = \frac{V_3}{R_3} = \frac{5V}{409.5\Omega} = 0.0122100122100122A
$$



$$
I_{T\text{max}} = 4.75714761429047e-05A + 0.0148809523809524A + 0.0122100122100122A
$$

$$
I_{T\text{max}} = 0.0271385360671075A
$$

---

### SOLVING FOR $P_T$ (Power Consumption):

$$
P_T = I_T \times V_T
$$

$$
P_T = 0.0284954628704629A \times 5V
$$

$$
P_T = 0.142477314352314W
$$

MINIMUM $P_{T\text{min}}$:

$$
P_{T\text{min}} = 0.0299952240741714A \times 5V = 0.149976120370857W
$$

MAXIMUM $P_{T\text{max}}$:

$$
P_{T\text{max}} = 0.0271385360671075A \times 5V = 0.135692680335537W
$$

---

### SOLVING FOR $P_n$ (Individual Power Consumption):

$$
P_n = V_n \times I_n
$$

NOMINAL:

$$
P_1 = 4.995004995005e-05A \times 5V = 0.00024975024975025W
$$

$$
P_2 = 0.015625A \times 5V = 0.078125W
$$

$$
P_3 = 0.0128205128205128A \times 5V = 0.0641025641025641W
$$

*TOTAL INDIVIDUAL POWER CONSUMPTION:*

$$
P_T = 0.00024975024975025W + 0.078125W + 0.0641025641025641W = 0.142477314352314W
$$

MINIMUM $P_{n\text{min}}$:

$$
P_{1\text{min}} = 5.2578999947421e-05A \times 5V = 0.000262894999737105W
$$

$$
P_{2\text{min}} = 0.0164473684210526A \times 5V = 0.0822368421052631W
$$

$$
P_{3\text{min}} = 0.0134952766531714A \times 5V = 0.0674763832658569W
$$

*TOTAL MINIMUM INDIVIDUAL POWER CONSUMPTION:*

$$
P_{T\text{min}} = 0.000262894999737105W + 0.0822368421052631W + 0.0674763832658569W = 0.149976120370857W
$$

MAXIMUM $P_{n\text{max}}$:

$$
P_{1\text{max}} = 4.75714761429047e-05A \times 5V = 0.000237857380714524W
$$

$$
P_{2\text{max}} = 0.0148809523809524A \times 5V = 0.0744047619047619W
$$

$$
P_{3\text{max}} = 0.0122100122100122A \times 5V = 0.061050061050061W
$$

*TOTAL MAXIMUM INDIVIDUAL POWER CONSUMPTION:*

$$
P_{T\text{max}} = 0.000237857380714524W + 0.0744047619047619W + 0.061050061050061W = 0.135692680335537W
$$
