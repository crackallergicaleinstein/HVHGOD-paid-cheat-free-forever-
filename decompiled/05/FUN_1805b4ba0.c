// FUN_1805b4ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4ba0 */

ulonglong FUN_1805b4ba0(longlong param_1,uint *param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (5 < param_3) {
    return 0;
  }
  uVar7 = 0;
  if (0 < param_3) {
    lVar6 = 0x180000000;
    lVar5 = 0;
    do {
      if (*param_2 == 0) {
        FUN_1805b4fa0(plVar2);
        if ((int)plVar2[3] < 2) {
          pcVar4 = (char *)*plVar2;
          pcVar8 = pcVar4 + -1;
          do {
            if ((char *)plVar2[2] <= pcVar4) break;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *plVar2 = (longlong)pcVar4;
            if ((cVar1 == '\r') || (cVar1 == '\n')) {
              *(undefined4 *)(plVar2 + 3) = 2;
              goto LAB_1805b4d06;
            }
          } while (cVar1 != '\x1a');
          *(undefined4 *)(plVar2 + 3) = 3;
        }
        else {
          pcVar8 = (char *)0x0;
        }
      }
      else {
        if ((int)plVar2[3] < 1) {
          do {
            pcVar8 = (char *)*plVar2;
            if ((char *)plVar2[2] <= pcVar8) goto LAB_1805b4ca8;
            cVar1 = *pcVar8;
            *plVar2 = (longlong)(pcVar8 + 1);
          } while ((cVar1 == ' ') || (cVar1 == '\t'));
          if ((cVar1 == '\r') || (cVar1 == '\n')) {
            *(undefined4 *)(plVar2 + 3) = 2;
          }
          else if (cVar1 == ';') {
            *(undefined4 *)(plVar2 + 3) = 1;
          }
          else if (cVar1 == '\x1a') {
LAB_1805b4ca8:
            *(undefined4 *)(plVar2 + 3) = 3;
          }
          if ((int)plVar2[3] < 1) {
            pcVar4 = (char *)*plVar2;
            pcVar8 = pcVar4 + -1;
            do {
              if ((char *)plVar2[2] <= pcVar4) break;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              *plVar2 = (longlong)pcVar4;
              if ((cVar1 == ' ') || (cVar1 == '\t')) goto LAB_1805b4d06;
              if ((cVar1 == '\r') || (cVar1 == '\n')) {
                *(undefined4 *)(plVar2 + 3) = 2;
                goto LAB_1805b4d06;
              }
              if (cVar1 == ';') {
                *(undefined4 *)(plVar2 + 3) = 1;
                goto LAB_1805b4d06;
              }
            } while (cVar1 != '\x1a');
            *(undefined4 *)(plVar2 + 3) = 3;
            goto LAB_1805b4d06;
          }
        }
        pcVar8 = (char *)0x0;
      }
LAB_1805b4d06:
      if (pcVar8 == (char *)0x0) break;
      if (*param_2 < 6) {
        UNRECOVERED_JUMPTABLE =
             (code *)((ulonglong)*(uint *)(lVar6 + 0x5b4e8c + (longlong)(int)*param_2 * 4) + lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001805b4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return uVar3;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 4;
    } while (lVar5 < param_3);
  }
  return (ulonglong)uVar7;
}



