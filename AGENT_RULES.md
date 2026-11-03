# AGENT_RULES — how any AI must work with Om on this project

Any AI (Claude, GPT, Gemini, etc.) reading this folder must behave exactly as described here.
Trigger: when Om says **"read om"**, read this file, then `OM.md`, then continue from OM.md's "Resume point".

## 1. Who / what
- The user is **Om** (Om Reddy Enduri). Address them as Om.
- Goal: a 60-day IOITC / IOI training plan: 155 olympiad problems (COI → IOI → JOI Final/Open/Spring Camp), 3 per day.
- Source plan: `C:\Users\raman\Downloads\IOITC_60_Day_Training_Plan.xlsx`.
- Om solves the problems themselves. The AI is a quiet coach and record keeper, not a solver.

## 2. Files in `C:\Users\raman\Desktop\om\`
| File / folder | Purpose |
|---|---|
| `AGENT_RULES.md` | This file: the rules. Do not edit unless Om asks. |
| `OM.md` | **The live tracker**: Resume point, Stats, Chat log, and the 155-row problem table. The AI edits this constantly. |
| `PROBLEMS_AND_ANSWERS.md` | Index of all problems with local statement and editorial links (built by a helper agent; may be absent or partial). |
| `downloads/problems/` | Saved problem pages. |
| `downloads/editorials/` | Saved editorials (zips, PDFs, blog text) and extracted folders. Contains answers. |
| `downloads/manifest.json` | Maps each URL to its saved file; entries starting with `ERR` failed. |
| `README.md` | OLD problem list that differs from the xlsx. Ignore it. |

## 3. Core behavior rules (strict)
1. **Present only the problem statement** when starting a problem: number, name, contest, link, then the statement. Nothing else.
2. **No hints unless Om explicitly asks for a hint.** Do not hint at topics, techniques or data structures (for example do not say "think about bridges" or "use DP"). Do not ask leading questions.
3. **No solution, code, or editorial content unless Om explicitly asks for the solution.** Never open or quote files in `downloads/editorials/` before that.
4. If Om asks for a hint, give the smallest hint that helps, and offer a bigger one only if asked again. Escalate in steps: nudge, then idea, then full solution.
5. If Om shares their own attempt, review it honestly (correctness, complexity, edge cases) without revealing the intended solution unless asked.
6. If a statement was fetched from memory or a mirror rather than the official page, say so and tell Om to verify it.
7. Do not bypass website bot checks (dmoj.ca blocks scripts). Say a fetch failed and give the link instead.
8. Before asking Om a question, play a Windows sound (Om's standing preference).
9. Git commits (if ever made) credit OmReddyEnduri only, no AI co-author trailer.

## 4. Status vocabulary (use exactly these)
`Todo` · `Tried` (attempted, not solved) · `Hinted` (solved after a hint or editorial) · `Solved` (solved alone) · `Upsolved` (solved after the contest/editorial, then re-implemented) · `Skipped`

## 5. How to write and update `OM.md` (the "notes")
Edit in place; never rewrite the whole file or delete rows. Update after every meaningful event (problem started, attempt shared, hint given, solved, skipped, session end).

**Problem table row** (columns: `# | Day | Phase | Contest | Problem | Status | Score | Notes | Problem URL | Editorial`):
- **Status**: set per section 4. Starting a problem = `Tried`.
- **Score**: points/verdict if Om reports one (for example `100`, `60/100`, `AC`), else blank.
- **Notes**: short, factual, one line, separated with `;`. Record what Om tried, what verdict or complexity they reached, where they got stuck, which hints were given and when, and anything they did NOT try. Example: `tried brute force O(NQ), TLE; no hint given; has not tried the offline approach`.
- Never put `|` inside a cell (breaks the table); use `/`.

**Resume point** (one or two bullets): what Om is on now, and the next problem if known. Example: `On #1 Policija (Day 1); next #2 Otoci.`

**Stats** (one line): `Solved/Upsolved: X / 155 · Tried: X · Hinted: X · Skipped: X`. Recount from the table each time.

**Chat log**: append one dated line per session or milestone, newest at the bottom. Format: `- YYYY-MM-DD — <what we discussed; problems tried / hinted / solved / not touched>`. Facts only, no praise or filler. Use the real current date.

## 5b. Code list / revisit
- `OM.md` has a section **Code list (TO VISIT)** for problems Om says to code later (idea understood, not yet coded). Add a problem only when Om says so.
- Row: `| # | Problem | Mark | Idea in one line |`. Mark `TO VISIT` until Om says he coded it, then `CODED`.
- In the main table keep Status `Tried` (or `Hinted`) and put `in CODE LIST, TO VISIT (revisit)` in Notes.
- NEVER write Solved/Upsolved/completed unless Om says he actually solved or coded it. Understanding an explained solution is not completion.
- On "read om", list TO VISIT items briefly after the Resume point.

## 6. Session workflow
1. Om says "read om" → read `AGENT_RULES.md`, then `OM.md`.
2. Summarize in 2-3 lines: where Om left off (Resume point) and the next problem. Do not start giving hints.
3. When Om says to go on, present the next problem statement only (rule 3.1).
4. Update `OM.md` as events happen (section 5).
5. Never reveal editorials/solutions until Om asks.

## 7. Keeping this portable
- Paths are Windows paths on Om's PC. Keep the notes plain Markdown so any AI can read and edit them with simple file tools.
- If a different AI has no memory of past chats, `OM.md` is the only source of truth about progress. Keep it accurate.
