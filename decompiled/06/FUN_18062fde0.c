// FUN_18062fde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062fde0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18062fde0(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_18061f698();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar4 = FUN_1806218d4(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                        local_98,0x40);
  if (iVar4 == 0) goto LAB_18062fe46;
  iVar4 = FUN_180615da0(*(undefined8 *)(lVar5 + 0xa0),local_98);
  lVar7 = -1;
  if (iVar4 != 0) goto LAB_18062ff3a;
  iVar4 = FUN_1806218d4(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_98,0x40);
  if (iVar4 == 0) goto LAB_18062fe46;
  iVar4 = FUN_180615da0(*plVar1,local_98);
  if (iVar4 == 0) {
    lVar8 = -1;
    *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)(param_1 + lVar8 * 2) != 0);
LAB_18062ff1b:
    iVar4 = FUN_18062f9c0();
    if (iVar4 != 0) goto LAB_1806300bd;
  }
  else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
    if ((*(int *)(lVar5 + 0xac) == 0) ||
       (iVar4 = FUN_180633210(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar4 != 0)) {
      if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar4 = FUN_18063028c(param_1), iVar4 == 0))
      goto LAB_18062ff3a;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(param_1 + lVar8 * 2) != 0);
    }
    else {
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(param_1 + lVar8 * 2) != 0);
    }
    goto LAB_18062ff1b;
  }
LAB_18062ff3a:
  if ((*(uint *)(lVar5 + 0xa8) & 0x300) == 0x300) {
  }
  iVar4 = FUN_1806218d4(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_98,0x40);
  if (iVar4 == 0) {
LAB_18062fe46:
    *(undefined4 *)(lVar5 + 0xa8) = 0;
  }
  iVar4 = FUN_180615da0(*plVar1,local_98);
  if (iVar4 != 0) {
  }
  uVar3 = *(uint *)(lVar5 + 0xa8);
  *(uint *)(lVar5 + 0xa8) = uVar3 | 0x200;
  if (*(int *)(lVar5 + 0xb0) == 0) {
    if (*(int *)(lVar5 + 0xac) != 0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(*plVar1 + lVar8 * 2) != 0);
      if ((int)lVar8 == *(int *)(lVar5 + 0xac)) {
        iVar4 = FUN_18063028c(param_1);
        if (iVar4 == 0) {
          psVar6 = (short *)*plVar1;
          iVar4 = 0;
          if (psVar6 != (short *)0x0) {
            while( true ) {
              sVar2 = *psVar6;
              psVar6 = psVar6 + 1;
              if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
              iVar4 = iVar4 + 1;
            }
          }
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(short *)(*plVar1 + lVar8 * 2) != 0);
          if (iVar4 == (int)lVar8) {
          }
        }
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
        if (*(short *)(lVar5 + 0x2f0) != 0) {
        }
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
        goto LAB_180630052;
      }
    }
    *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
    if (*(short *)(lVar5 + 0x2f0) != 0) {
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(short *)(param_1 + lVar7 * 2) != 0);
  }
  else {
    *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
    if (*(short *)(lVar5 + 0x2f0) != 0) {
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(short *)(param_1 + lVar7 * 2) != 0);
  }
LAB_180630052:
  iVar4 = FUN_18062f9c0();
  if (iVar4 == 0) {
  }
LAB_1806300bd:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



