# OM — IOITC training tracker & chat log

> **AI: when Om says "read om", read `AGENT_RULES.md` first (strict rules: no hints/solutions unless asked), then THIS file, then continue from "Resume point".**
> Source plan: `C:/Users/raman/Downloads/IOITC_60_Day_Training_Plan.xlsx` (155 problems, 60 days, 3 phases).
> `README.md` in this folder is an OLDER problem list (differs from the xlsx) — ignore it; this file follows the xlsx.

## How to keep this file updated (Claude)
- Whenever Om works on / discusses a problem, update its **Status** and **Notes** in the table below (edit the row in place).
- Status values: `Todo` · `Tried` (attempted, not solved) · `Hinted` (solved with hints/editorial) · `Solved` · `Upsolved` · `Skipped`
- Append a line to **Chat log** at the end of each session (date, what was discussed, what was tried / not tried).
- Update **Resume point** and **Stats** at the same time.

## Resume point
- #1, #2, #3 (Policija, Otoci, Plahte): ideas worked out, not coded; all in Code list (TO VISIT / revisit). Next: #4 Torrent (Day 2) when Om says next.

## Stats
- Solved/Upsolved: 0 / 155 · Tried: 0 · Hinted: 0 · Skipped: 0

## Chat log
- 2026-11-02 — Created this tracker from the xlsx. No problems attempted yet.
- 2026-11-02 — Downloaded 261 files into downloads/ (21 failed: dmoj.ca blocks scripts). Started #1 Policija; official solution code is in downloads/editorials/COI_2006_2007 (do not show until Om asks).
- 2026-11-02 — All 155 statements and editorials now downloaded (agent finished the dmoj ones via Playwright). Corrected #1 Policija statement from the real page. Om asked for a hint on #1: gave level 1.

## Code list (TO VISIT: idea understood, still needs coding)
Only problems Om chooses go here. Mark `TO VISIT`; change to `CODED` only when Om says he has coded it. Never mark a problem Solved/completed just because the idea was explained.
| # | Problem | Mark | Idea in one line (Om's understanding) |
|---|---|---|---|
| 1 | Policija | TO VISIT | Type 1: bridge tree; road not a bridge = yes, else yes only if A,B on same side. Type 2: DFS tree; removing city C leaves the upper part + one piece per child; a child piece with low[child] >= tin[C] is cut off; yes iff A,B in same piece. Solution was shown to Om. |
| 2 | Otoci | TO VISIT | Online/interactive. Rebuild every sqrt(Q) ops (prefix sums + LCA on current forest); DSU for bridge yes/no and connectivity; excursion path = tree pieces joined by the <= sqrt(Q) recent bridges, plus fix for recently changed penguin counts that lie on the path. Pitfalls: find recent bridges on the path, don't double count shared endpoints. Not coded. |
| 3 | Plahte | TO VISIT | Oil reaches cell (x,y) at time max(|x|,|y|) (Om first said min; corrected). Reflect to first quadrant, split sheets crossing axes. Per sheet, newly stained cells per time change in simple stretches; accumulate into a global array over time (<= 1e6), sweep once with a pointer over the ascending query times; int64. Equations not finalized. Not coded. |

## Problems
| # | Day | Phase | Contest | Problem | Status | Score | Notes (what Om tried / where stuck) | Problem URL | Editorial |
|---|---|---|---|---|---|---|---|---|---|
| 1 | 1 | P1 | COI 2007 | Policija | Tried |  | hint 1 + full solution explained 2026-11-02 (Om asked); NOT coded, NOT completed; in CODE LIST, TO VISIT (revisit) | https://dmoj.ca/problem/coi06p2 | https://hsin.hr/coci/archive/2006_2007/olympiad_solutions.zip |
| 2 | 1 | P1 | COI 2009 | Otoci | Tried |  |  | Om proposed: sqrt decomposition (rebuild every sqrt(Q) ops, DSU to pick edges, LCA/path sums, pending penguin changes checked on path). Flaw flagged: problem is interactive/online, so the final tree can't be built upfront from DSU over all commands. Not coded; in CODE LIST, TO VISIT (revisit). | https://dmoj.ca/problem/coi08p2 | https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip |
| 3 | 1 | P1 | COI 2009 | Plahte | Tried |  |  | Om proposed per-time counts + prefix array, swept over sorted queries; first said min(x,y) (wrong: max(\|x\|,\|y\|)); no solution shown; NOT coded; in CODE LIST, TO VISIT (revisit) | https://dmoj.ca/problem/coi08p3 | https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip |
| 4 | 2 | P1 | COI 2016 | Torrent | Todo |  |  | https://oj.uz/problem/view/COI16_torrent | https://hsin.hr/coci/archive/2015_2016/olympiad_solutions.zip |
| 5 | 2 | P1 | COI 2007 | Sabor | Todo |  |  | https://dmoj.ca/problem/coi06p3 | https://hsin.hr/coci/archive/2006_2007/olympiad_solutions.zip |
| 6 | 2 | P1 | COI 2020 | Pastiri | Todo |  |  | https://oj.uz/problem/view/COI20_pastiri | https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip |
| 7 | 3 | P1 | COI 2008 | Umnožak | Todo |  |  | https://dmoj.ca/problem/coi07p4 | https://hsin.hr/coci/archive/2007_2008/olympiad_solutions.zip |
| 8 | 3 | P1 | COI 2009 | Izbori | Todo |  |  | https://dmoj.ca/problem/coi08p1 | https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip |
| 9 | 3 | P1 | COI 2019 | Izlet | Todo |  |  | https://oj.uz/problem/view/COI19_izlet | https://codeforces.com/blog/entry/66506#comment-505659 |
| 10 | 4 | P1 | COI 2019 | Tenis | Todo |  |  | https://oj.uz/problem/view/COI19_tenis | https://codeforces.com/blog/entry/66506#comment-505659 |
| 11 | 4 | P1 | COI 2017 | Zagrade | Todo |  |  | https://oj.uz/problem/view/COI17_zagrade | https://codeforces.com/blog/entry/51198#comment-350995 |
| 12 | 4 | P1 | COI 2018 | Zagonetka | Todo |  |  | https://oj.uz/problem/view/COI18_zagonetka | https://codeforces.com/blog/entry/58552#comment-422062 |
| 13 | 5 | P1 | COI 2015 | Čvenk | Todo |  |  | https://oj.uz/problem/view/COI15_cvenk | https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip |
| 14 | 5 | P1 | COI 2015 | Ogledala | Todo |  |  | https://oj.uz/problem/view/COI15_ogledala | https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip |
| 15 | 5 | P1 | COI 2011 | Kamion | Todo |  |  | https://dmoj.ca/problem/coi10p4 | https://hsin.hr/coci/archive/2010_2011/olympiad_solutions.zip |
| 16 | 6 | P1 | COI 2010 | Loza | Todo |  |  | https://dmoj.ca/problem/coi09p3 | https://dmoj.ca/problem/coi09p3/editorial |
| 17 | 6 | P1 | COI 2016 | Palinilap | Todo |  |  | https://oj.uz/problem/view/COI16_palinilap | https://usaco.guide/problems/coi-2016palinilap/solution |
| 18 | 6 | P1 | COI 2021 | Cigle | Todo |  |  | https://oj.uz/problem/view/COI21_cigle | https://hsin.hr/hio2021/zadaci/rjesenja.zip |
| 19 | 7 | P1 | COI 2019 | Ljepotica | Todo |  |  | https://oj.uz/problem/view/COI19_ljetopica | https://codeforces.com/blog/entry/66506#comment-505659 |
| 20 | 7 | P1 | COI 2015 | Sir | Todo |  |  | https://oj.uz/problem/view/COI15_sir | https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip |
| 21 | 7 | P1 | COI 2012 | Kampanja | Todo |  |  | https://dmoj.ca/problem/coi11p1 | https://hsin.hr/coci/archive/2011_2012/olympiad_solutions.zip |
| 22 | 8 | P1 | COI 2010 | Roboti | Todo |  |  | https://dmoj.ca/problem/coi09p4 | https://hsin.hr/coci/archive/2009_2010/olympiad_solutions.zip |
| 23 | 8 | P1 | COI 2011 | Lovci | Todo |  |  | https://dmoj.ca/problem/coi10p5 | https://hsin.hr/coci/archive/2010_2011/olympiad_solutions.zip |
| 24 | 8 | P1 | COI 2014 | Histogrami | Todo |  |  | https://dmoj.ca/problem/coi13p2 | https://dmoj.ca/problem/coi13p2/editorial |
| 25 | 9 | P1 | COI 2013 | Hiperprostor | Todo |  |  | https://dmoj.ca/problem/coi12p1 | https://hsin.hr/hio2013/zadaci/rjesenja.zip |
| 26 | 9 | P1 | COI 2021 | Izvanzemaljci | Todo |  |  | https://oj.uz/problem/view/COI21_izvanzemaljci | https://hsin.hr/hio2021/zadaci/rjesenja.zip |
| 27 | 9 | P1 | COI 2020 | Paint | Todo |  |  | https://oj.uz/problem/view/COI20_paint | https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip |
| 28 | 10 | P1 | COI 2018 | Svjetlost | Todo |  |  | https://oj.uz/problem/view/COI18_svjetlost | https://codeforces.com/blog/entry/58552#comment-422062 |
| 29 | 10 | P1 | COI 2016 | Relay | Todo |  |  | https://oj.uz/problem/view/COI16_relay | https://hsin.hr/coci/archive/2015_2016/olympiad_solutions.zip |
| 30 | 10 | P1 | COI 2020 | Semafor | Todo |  |  | https://oj.uz/problem/view/COI20_semafor | https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip |
| 31 | 11 | P1 | COI 2012 | Mjesec | Todo |  |  | https://dmoj.ca/problem/coi11p2 | https://hsin.hr/coci/archive/2011_2012/olympiad_solutions.zip |
| 32 | 11 | P1 | COI 2013 | Rotacije | Todo |  |  | https://dmoj.ca/problem/coi12p2 | https://hsin.hr/hio2013/zadaci/rjesenja.zip |
| 33 | 11 | P1 | COI 2018 | Pick | Todo |  |  | https://oj.uz/problem/view/COI18_pick | https://hsin.hr/hio2018/zadaci/rjesenja.zip |
| 34 | 12 | P1 | COI 2017 | Raspad | Todo |  |  | https://oj.uz/problem/view/COI17_raspad | https://codeforces.com/blog/entry/51198#comment-350995 |
| 35 | 12 | P1 | COI 2017 | Trapezi | Todo |  |  | https://oj.uz/problem/view/COI17_trapezi | https://codeforces.com/blog/entry/51198#comment-350995 |
| 36 | 12 | P1 | COI 2021 | MalnaRISC | Todo |  |  | https://oj.uz/problem/view/COI21_malnarisc | https://hsin.hr/hio2021/zadaci/rjesenja.zip |
| 37 | 13 | P1 | COI 2022 | Mađioničar | Todo |  |  | https://oj.uz/problem/view/COI22_madionicar | https://codeforces.com/blog/entry/103280#comment-917355 |
| 38 | 13 | P1 | COI 2022 | Vinjete | Todo |  |  | https://oj.uz/problem/view/COI22_vinjete | https://codeforces.com/blog/entry/103280#comment-917355 |
| 39 | 13 | P1 | COI 2024 | CERN | Todo |  |  | https://qoj.ac/problem/8894 | https://errorgorn.github.io/2024/04/30/COI.html |
| 40 | 14 | P1 | COI 2022 | Menza | Todo |  |  | https://oj.uz/problem/view/COI22_menza | https://codeforces.com/blog/entry/103280#comment-917355 |
| 41 | 14 | P1 | COI 2024 | Ministarstvo | Todo |  |  | https://qoj.ac/problem/8896 | https://errorgorn.github.io/2024/04/30/COI.html |
| 42 | 14 | P1 | COI 2023 | Sličnost | Todo |  |  | https://oj.uz/problem/view/COI23_slicnost | https://codeforces.com/blog/entry/116652#comment-1031304 |
| 43 | 15 | P1 | COI 2022 | Povjerenstvo | Todo |  |  | https://oj.uz/problem/view/COI22_povjerenstvo | https://codeforces.com/blog/entry/103280#comment-917355 |
| 44 | 15 | P1 | COI 2024 | Koreografija | Todo |  |  | https://qoj.ac/problem/8895 | https://errorgorn.github.io/2024/04/30/COI.html |
| 45 | 15 | P1 | COI 2024 | Sirologija | Todo |  |  | https://qoj.ac/problem/8897 | https://errorgorn.github.io/2024/04/30/COI.html |
| 46 | 16 | P2 | IOI 2020 | Packing Biscuits | Todo |  |  | https://oj.uz/problem/view/IOI20_biscuits | https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/biscuits-solutions-ISC.pdf |
| 47 | 16 | P2 | IOI 2002 | Bus Terminals | Todo |  |  | https://dmoj.ca/problem/ioi02p5 | https://ioinformatics.org/files/ioi2002solutions.zip |
| 48 | 16 | P2 | IOI 2001 | Depot | Todo |  |  | https://dmoj.ca/problem/ioi01p6 | https://ioinformatics.org/files/ioi2001solutions.pdf |
| 49 | 17 | P2 | IOI 2004 | Empodia | Todo |  |  | https://dmoj.ca/problem/ioi04p6 | https://ioinformatics.org/files/ioi2004solutions.zip |
| 50 | 17 | P2 | IOI 2007 | Sails | Todo |  |  | https://oj.uz/problem/view/IOI07_sails | https://ioinformatics.org/files/ioi2007solutions.pdf |
| 51 | 17 | P2 | IOI 2009 | Salesman | Todo |  |  | https://oj.uz/problem/view/IOI09_salesman | https://ioinformatics.org/files/ioi2009solutions.pdf |
| 52 | 18 | P2 | IOI 2019 | Rectangles | Todo |  |  | https://oj.uz/problem/view/IOI19_rect | https://ioinformatics.org/files/ioi2019solutions.zip |
| 53 | 18 | P2 | IOI 2017 | Wiring | Todo |  |  | https://oj.uz/problem/view/IOI17_wiring | https://ioinformatics.org/files/ioi2017solutions.zip |
| 54 | 18 | P2 | IOI 2018 | Werewolf | Todo |  |  | https://oj.uz/problem/view/IOI18_werewolf | https://ioinformatics.org/files/ioi2018solutions.zip |
| 55 | 19 | P2 | IOI 2015 | Teams | Todo |  |  | https://oj.uz/problem/view/IOI15_teams | https://ioinformatics.org/files/ioi2015solutions.zip |
| 56 | 19 | P2 | IOI 2021 | Dungeons Game | Todo |  |  | https://oj.uz/problem/view/IOI21_dungeons | https://codeforces.com/blog/entry/92194#comment-808628 |
| 57 | 19 | P2 | IOI 2025 | Festival | Todo |  |  | https://oj.uz/problem/view/IOI25_festival | https://codeforces.com/blog/entry/145172#comment-1299575 |
| 58 | 20 | P2 | IOI 2025 | World Map | Todo |  |  | https://oj.uz/problem/view/IOI25_worldmap | https://codeforces.com/blog/entry/145172#comment-1298794 |
| 59 | 20 | P2 | IOI 2023 | Closing Time | Todo |  |  | https://oj.uz/problem/view/IOI23_closing | https://codeforces.com/blog/entry/153165 |
| 60 | 20 | P2 | IOI 2021 | Fountain Parks | Todo |  |  | https://oj.uz/problem/view/IOI21_parks | https://codeforces.com/blog/entry/92083#comment-807698 |
| 61 | 21 | P2 | IOI 2014 | Rail | Todo |  |  | https://oj.uz/problem/view/IOI14_rail | https://ioinformatics.org/files/ioi2014solutions.zip |
| 62 | 21 | P2 | IOI 2014 | Holiday | Todo |  |  | https://oj.uz/problem/view/IOI14_holiday | https://ioinformatics.org/files/ioi2014solutions.zip |
| 63 | 21 | P2 | IOI 2012 | Last Supper | Todo |  |  | https://oj.uz/problem/view/IOI12_supper | https://blog.brucemerry.org.za/2012/09/ioi-2012-day-2-analysis.html |
| 64 | 22 | P2 | IOI 2023 | Longest Trip | Todo |  |  | https://oj.uz/problem/view/IOI23_longesttrip | https://blog.brucemerry.org.za/2023/11/ioi-2023-day-1.html |
| 65 | 22 | P2 | IOI 2020 | Comparing Plants | Todo |  |  | https://oj.uz/problem/view/IOI20_plants | https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/plants-solutions-ISC.pdf |
| 66 | 22 | P2 | IOI 2022 | Rarest Insects | Todo |  |  | https://oj.uz/problem/view/IOI22_insects | https://ioi2022.id/data/editorial.pdf |
| 67 | 23 | P2 | IOI 2024 | Sphinx's Riddle | Todo |  |  | https://oj.uz/problem/view/IOI24_sphinx | https://ioinformatics.org/files/ioi2024solutions.zip |
| 68 | 23 | P2 | IOI 2022 | Prisoner Challenge | Todo |  |  | https://oj.uz/problem/view/IOI22_prison | https://ioi2022.id/data/editorial.pdf |
| 69 | 23 | P2 | IOI 2022 | Radio Towers | Todo |  |  | https://oj.uz/problem/view/IOI22_towers | https://ioi2022.id/data/editorial.pdf |
| 70 | 24 | P2 | IOI 2015 | Towns | Todo |  |  | https://oj.uz/problem/view/IOI15_towns | https://ioinformatics.org/files/ioi2015solutions.zip |
| 71 | 24 | P2 | IOI 2011 | Parrots | Todo |  |  | https://oj.uz/problem/view/IOI11_parrots | https://ioinformatics.org/files/ioi2011solutions.zip |
| 72 | 24 | P2 | IOI 2010 | Saveit | Todo |  |  | https://oj.uz/problem/view/IOI10_saveit | https://ioinformatics.org/files/ioi2010solutions.pdf |
| 73 | 25 | P2 | IOI 2013 | Game | Todo |  |  | https://oj.uz/problem/view/IOI13_game | https://blog.brucemerry.org.za/2013/07/ioi-2013-day-2-analysis.html |
| 74 | 25 | P2 | IOI 2011 | Dancing Elephants | Todo |  |  | https://oj.uz/problem/view/IOI11_elephants | https://ioinformatics.org/files/ioi2011solutions.zip |
| 75 | 25 | P2 | IOI 2012 | Ideal City | Todo |  |  | https://oj.uz/problem/view/IOI12_city | https://blog.brucemerry.org.za/2012/09/ioi-2012-day-2-analysis.html |
| 76 | 26 | P2 | IOI 2021 | Bit Shift Registers | Todo |  |  | https://oj.uz/problem/view/IOI21_registers | https://codeforces.com/blog/entry/92194#comment-808609 |
| 77 | 26 | P2 | IOI 2019 | Split the Attractions | Todo |  |  | https://oj.uz/problem/view/IOI19_split | https://ioinformatics.org/files/ioi2019solutions.zip |
| 78 | 26 | P2 | IOI 2022 | Thousand Islands | Todo |  |  | https://oj.uz/problem/view/IOI22_islands | https://ioi2022.id/data/editorial.pdf |
| 79 | 27 | P2 | IOI 2024 | Message | Todo |  |  | https://oj.uz/problem/view/IOI24_message | https://ioinformatics.org/files/ioi2024solutions.zip |
| 80 | 27 | P2 | IOI 2024 | Tree | Todo |  |  | https://oj.uz/problem/view/IOI24_tree | https://ioinformatics.org/files/ioi2024solutions.zip |
| 81 | 27 | P2 | IOI 2016 | Roller Coaster Railroad | Todo |  |  | https://oj.uz/problem/view/IOI16_railroad | https://ioinformatics.org/files/ioi2016solutions.pdf |
| 82 | 28 | P2 | IOI 2017 | Ancient Books | Todo |  |  | https://oj.uz/problem/view/IOI17_books | https://ioinformatics.org/files/ioi2017solutions.zip |
| 83 | 28 | P2 | IOI 2017 | Toy Train | Todo |  |  | https://oj.uz/problem/view/IOI17_train | https://ioinformatics.org/files/ioi2017solutions.zip |
| 84 | 28 | P2 | IOI 2017 | Simurgh | Todo |  |  | https://oj.uz/problem/view/IOI17_simurgh | https://ioinformatics.org/files/ioi2017solutions.zip |
| 85 | 29 | P2 | IOI 2007 | Training | Todo |  |  | https://oj.uz/problem/view/IOI07_training | https://ioinformatics.org/files/ioi2007solutions.pdf |
| 86 | 29 | P2 | IOI 2013 | Wombats | Todo |  |  | https://oj.uz/problem/view/IOI13_wombats | https://blog.brucemerry.org.za/2013/07/ioi-2013-day-1-analysis.html |
| 87 | 29 | P2 | IOI 2023 | Soccer Stadium | Todo |  |  | https://oj.uz/problem/view/IOI23_soccer | https://blog.brucemerry.org.za/2023/11/ioi-2023-day-1.html |
| 88 | 30 | P2 | IOI 2003 | Reverse | Todo |  |  | https://oj.uz/problem/view/IOI03_reverse | https://github.com/mostafa-saad/MyCompetitiveProgramming/blob/master/Olympiad/IOI/official/2003/reverse.pdf |
| 89 | 30 | P2 | IOI 2019 | Broken Line | Todo |  |  | https://oj.uz/problem/view/IOI19_line | https://ioinformatics.org/files/ioi2019solutions.zip |
| 90 | 30 | P2 | IOI 2016 | Aliens | Todo |  |  | https://oj.uz/problem/view/IOI16_aliens | https://ioinformatics.org/files/ioi2016solutions.pdf |
| 91 | 31 | P2 | IOI 2018 | Highway Tolls | Todo |  |  | https://oj.uz/problem/view/IOI18_highway | https://ioinformatics.org/files/ioi2018solutions.zip |
| 92 | 31 | P2 | IOI 2018 | Seats | Todo |  |  | https://oj.uz/problem/view/IOI18_seats | https://ioinformatics.org/files/ioi2018solutions.zip |
| 93 | 31 | P2 | IOI 2020 | Counting Mushrooms | Todo |  |  | https://oj.uz/problem/view/IOI20_mushrooms | https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/mushrooms-solutions-ISC.pdf |
| 94 | 32 | P2 | IOI 2023 | Beech Tree | Todo |  |  | https://oj.uz/problem/view/IOI23_beechtree | https://blog.brucemerry.org.za/2023/11/ioi-2023-beech-tree.html |
| 95 | 32 | P2 | IOI 2023 | Robot Contest | Todo |  |  | https://oj.uz/problem/view/IOI23_robot | https://codeforces.com/blog/entry/120252 |
| 96 | 32 | P2 | IOI 2026 | Monuments | Todo |  |  | https://oj.uz/problem/view/IOI26_monuments | https://codeforces.com/blog/entry/155911#comment-1387237 |
| 97 | 33 | P2 | IOI 2008 | Fish | Todo |  |  | https://oj.uz/problem/view/IOI08_fish | https://ioinformatics.org/files/ioi2008solutions.pdf |
| 98 | 33 | P2 | IOI 2016 | Shortcut | Todo |  |  | https://oj.uz/problem/view/IOI16_shortcut | https://ioinformatics.org/files/ioi2016solutions.pdf |
| 99 | 33 | P2 | IOI 2025 | Migrations | Todo |  |  | https://oj.uz/problem/view/IOI25_migrations | https://codeforces.com/blog/entry/145228 |
| 100 | 34 | P2 | IOI 2018 | Meetings | Todo |  |  | https://oj.uz/problem/view/IOI18_meetings | https://ioinformatics.org/files/ioi2018solutions.zip |
| 101 | 34 | P2 | IOI 2019 | Sky Walking | Todo |  |  | https://oj.uz/problem/view/IOI19_walk | https://ioinformatics.org/files/ioi2019solutions.zip |
| 102 | 34 | P2 | IOI 2024 | Hieroglyphs | Todo |  |  | https://oj.uz/problem/view/IOI24_hieroglyphs | https://ioinformatics.org/files/ioi2024solutions.zip |
| 103 | 35 | P2 | IOI 2025 | Triple Peaks | Todo |  |  | https://oj.uz/problem/view/IOI25_triples | https://codeforces.com/blog/entry/145172#comment-1298794 |
| 104 | 35 | P2 | IOI 2026 | Ball Machine | Todo |  |  | https://oj.uz/problem/view/IOI26_ballmachine | https://codeforces.com/blog/entry/155911#comment-1385026 |
| 105 | 35 | P2 | IOI 2026 | Classroom Game | Todo |  |  | https://oj.uz/problem/view/IOI26_classroom | https://codeforces.com/blog/entry/155911#comment-1389898 |
| 106 | 36 | P3 | JOI Final 2021 | Robot | Todo |  |  | https://oj.uz/problem/view/JOI21_ho_t4 | https://usaco.guide/problems/joi-2021robot/solution |
| 107 | 36 | P3 | JOI Final 2018 | Snake Escaping | Todo |  |  | https://oj.uz/problem/view/JOI18_snake_escaping | https://usaco.guide/problems/joi-2018snake-escaping/solution |
| 108 | 37 | P3 | JOI Final 2019 | Coin Collecting | Todo |  |  | https://oj.uz/problem/view/JOI19_ho_t4 | https://www2.ioi-jp.org/joi/2018/2019-ho/2019-ho-t4-review.pdf |
| 109 | 37 | P3 | JOI Final 2023 | Cat Exercise | Todo |  |  | https://oj.uz/problem/view/JOI23_ho_t4 | https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t4-review.pdf |
| 110 | 38 | P3 | JOI Final 2020 | Olympic Bus | Todo |  |  | https://oj.uz/problem/view/JOI20_ho_t4 | https://www2.ioi-jp.org/joi/2019/2020-ho/2020-ho-t4-review.pdf |
| 111 | 38 | P3 | JOI Final 2022 | Railway Trip 2 | Todo |  |  | https://oj.uz/problem/view/JOI22_ho_t4 | https://www2.ioi-jp.org/joi/2021/2022-ho/2022-ho-t4-review.pdf |
| 112 | 39 | P3 | JOI Final 2017 | Soccer | Todo |  |  | https://oj.uz/problem/view/JOI17_soccer | https://www2.ioi-jp.org/joi/2016/2017-ho/2017-ho-t4-review.pdf |
| 113 | 39 | P3 | JOI Final 2020 | Fire | Todo |  |  | https://oj.uz/problem/view/JOI20_ho_t5 | https://www2.ioi-jp.org/joi/2019/2020-ho/2020-ho-t5-review.pdf |
| 114 | 40 | P3 | JOI Final 2023 | Maze | Todo |  |  | https://oj.uz/problem/view/JOI23_ho_t3 | https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t3-review.pdf |
| 115 | 40 | P3 | JOI Final 2019 | Unique Cities | Todo |  |  | https://oj.uz/problem/view/JOI19_ho_t5 | https://www2.ioi-jp.org/joi/2018/2019-ho/2019-ho-t5-review.pdf |
| 116 | 41 | P3 | JOI Final 2017 | Rope | Todo |  |  | https://oj.uz/problem/view/JOI17_rope | https://www2.ioi-jp.org/joi/2016/2017-ho/2017-ho-t5-review.pdf |
| 117 | 41 | P3 | JOI Final 2024 | Gift Exchange | Todo |  |  | https://oj.uz/problem/view/JOI24_ho_t4 | https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t4-review.pdf |
| 118 | 42 | P3 | JOI Final 2024 | Marathon Race 2 | Todo |  |  | https://oj.uz/problem/view/JOI24_ho_t3 | https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t3-review.pdf |
| 119 | 42 | P3 | JOI Final 2021 | Dungeon 3 | Todo |  |  | https://oj.uz/problem/view/JOI21_ho_t5 | https://www2.ioi-jp.org/joi/2020/2021-ho/2021-ho-t5-review.pdf |
| 120 | 43 | P3 | JOI Final 2022 | Sandcastle 2 | Todo |  |  | https://oj.uz/problem/view/JOI22_ho_t5 | https://codeforces.com/blog/entry/99837#comment-886584 |
| 121 | 43 | P3 | JOI Final 2025 | Mi Teleférico | Todo |  |  | https://oj.uz/problem/view/JOI25_ho_t3 | https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t3-review.pdf |
| 122 | 44 | P3 | JOI Final 2025 | Just Long Neckties 2 | Todo |  |  | https://oj.uz/problem/view/JOI25_ho_t4 | https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t4-review.pdf |
| 123 | 44 | P3 | JOI Final 2023 | Modern Machine | Todo |  |  | https://oj.uz/problem/view/JOI23_ho_t5 | https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t5-review.pdf |
| 124 | 45 | P3 | JOI Final 2024 | Road Service 2 | Todo |  |  | https://oj.uz/problem/view/JOI24_ho_t5 | https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t5-review.pdf |
| 125 | 45 | P3 | JOI Final 2025 | Post Office | Todo |  |  | https://oj.uz/problem/view/JOI25_ho_t5 | https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t5-review.pdf |
| 126 | 46 | P3 | JOI Open 2017 | Amusement Park | Todo |  |  | https://oj.uz/problem/view/JOI17_amusement_park | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-amusement_park-sol-en.pdf |
| 127 | 46 | P3 | JOI Open 2017 | Bulldozer | Todo |  |  | https://oj.uz/problem/view/JOI17_bulldozer | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-bulldozer-sol-en.pdf |
| 128 | 47 | P3 | JOI Open 2020 | Monochrome Points | Todo |  |  | https://oj.uz/problem/view/JOI20_monochrome | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2020/monochrome/2020-open-monochrome-sol-en.pdf |
| 129 | 47 | P3 | JOI Open 2019 | Virus Experiment | Todo |  |  | https://oj.uz/problem/view/JOI19_virus | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2019/virus/2019-open-virus-sol-en.pdf |
| 130 | 48 | P3 | JOI Open 2021 | Monster Game | Todo |  |  | https://oj.uz/problem/view/JOI21_monster | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2021/monster/2021-open-monster-sol-en.pdf |
| 131 | 48 | P3 | JOI Open 2018 | Collapse | Todo |  |  | https://oj.uz/problem/view/JOI18_collapse | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2018/2018-open-collapse-sol-en.pdf |
| 132 | 49 | P3 | JOI Open 2017 | Golf | Todo |  |  | https://oj.uz/problem/view/JOI17_golf | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-golf-sol-en.pdf |
| 133 | 49 | P3 | JOI Open 2023 | Ancient Machine 2 | Todo |  |  | https://oj.uz/problem/view/JOI23_ancient2 | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2023/ancient2/2023-open-ancient2-sol-en.pdf |
| 134 | 50 | P3 | JOI Open 2022 | Giraffes | Todo |  |  | https://oj.uz/problem/view/JOI22_giraffes | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2022/giraffes/2022-open-giraffes-sol-en.pdf |
| 135 | 50 | P3 | JOI Open 2025 | Telepathy | Todo |  |  | https://oj.uz/problem/view/JOI25_telepathy | https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2025/telepathy/review-en.pdf |
| 136 | 51 | P3 | JOISC 2019 | Mergers | Todo |  |  | https://oj.uz/problem/view/JOI19_mergers | https://usaco.guide/problems/joi-mergers/solution |
| 137 | 51 | P3 | JOISC 2020 | Making Friends on Joitter is Fun | Todo |  |  | https://oj.uz/problem/view/JOI20_joitter2 | https://usaco.guide/problems/joi-2020joitter/solution |
| 138 | 52 | P3 | JOISC 2019 | Cake 3 | Todo |  |  | https://oj.uz/problem/view/JOI19_cake3 | https://usaco.guide/problems/joi-joi-spring-camp-2019-day-4cake-3/solution |
| 139 | 52 | P3 | JOISC 2018 | Airline Route Map | Todo |  |  | https://oj.uz/problem/view/JOI18_airline | https://usaco.guide/problems/joi-2018airline/solution |
| 140 | 53 | P3 | JOISC 2022 | Jail | Todo |  |  | https://oj.uz/problem/view/JOI22_jail | https://misaka18931.github.io/2022/04/05/JOISC-2022/ |
| 141 | 53 | P3 | JOISC 2020 | Stray Cat | Todo |  |  | https://oj.uz/problem/view/JOI20_stray | https://usaco.guide/problems/joi-2020stray-cat/solution |
| 142 | 54 | P3 | JOISC 2019 | Minerals | Todo |  |  | https://oj.uz/problem/view/JOI19_minerals | https://www2.ioi-jp.org/camp/2019/2019-sp-tasks/day4/minerals-review.pdf |
| 143 | 54 | P3 | JOISC 2020 | Treatment Project | Todo |  |  | https://oj.uz/problem/view/JOI20_treatment | https://codeforces.com/blog/entry/74871#comment-592237 |
| 144 | 55 | P3 | JOISC 2019 | Bitaro, who Leaps through Time | Todo |  |  | https://oj.uz/problem/view/JOI19_timeleap | https://www2.ioi-jp.org/camp/2019/2019-sp-tasks/day3/timeleap-review.pdf |
| 145 | 55 | P3 | JOISC 2018 | Wild Boar | Todo |  |  | https://oj.uz/problem/view/JOI18_wild_boar | https://www2.ioi-jp.org/camp/2018/2018-sp-tasks/day4/wild_boar-review.pdf |
| 146 | 56 | P3 | JOISC 2017 | Natural Park | Todo |  |  | https://oj.uz/problem/view/JOI17_park | https://www2.ioi-jp.org/camp/2017/2017-sp-tasks/2017-sp-d3-natural_park-review.pdf |
| 147 | 56 | P3 | JOISC 2021 | Navigation 2 | Todo |  |  | https://oj.uz/problem/view/JOI21_navigation2 | https://www2.ioi-jp.org/camp/2021/2021-sp-tasks/day4/navigation2-review.pdf |
| 148 | 57 | P3 | JOISC 2021 | Escape Route | Todo |  |  | https://oj.uz/problem/view/JOI21_escape_route | https://www2.ioi-jp.org/camp/2021/2021-sp-tasks/day2/escape_route-review.pdf |
| 149 | 57 | P3 | JOISC 2022 | Ants and Sugar | Todo |  |  | https://oj.uz/problem/view/JOI22_sugar | https://misaka18931.github.io/2022/04/05/JOISC-2022/ |
| 150 | 58 | P3 | JOISC 2024 | JOI Tour | Todo |  |  | https://oj.uz/problem/view/JOI24_joitour | https://www2.ioi-jp.org/camp/2024/2024-sp-tasks/contest3/joitour-review.pdf |
| 151 | 58 | P3 | JOISC 2023 | Festivals in JOI Kingdom 2 | Todo |  |  | https://oj.uz/problem/view/JOI23_festival2 | https://www2.ioi-jp.org/camp/2023/2023-sp-tasks/contest1/festival2-review.pdf |
| 152 | 59 | P3 | JOISC 2018 | Security Gate | Todo |  |  | https://oj.uz/problem/view/JOI18_security_gate | https://www2.ioi-jp.org/camp/2018/2018-sp-tasks/day3/security_gate-review.pdf |
| 153 | 59 | P3 | JOISC 2022 | Flights | Todo |  |  | https://oj.uz/problem/view/JOI22_flights | https://www2.ioi-jp.org/camp/2022/2022-sp-tasks/contest2/flights-review.pdf |
| 154 | 60 | P3 | JOISC 2025 | Space Thief | Todo |  |  | https://oj.uz/problem/view/JOI25_thief | https://www2.ioi-jp.org/camp/2025/2025-sp-tasks/contest2/thief-review.pdf |
| 155 | 60 | P3 | JOISC 2026 | Multi Communication 2 | Todo |  |  | https://oj.uz/problem/view/JOI26_multi | https://www2.ioi-jp.org/joi/2025/2026-final/contest1/multi-review.pdf |
