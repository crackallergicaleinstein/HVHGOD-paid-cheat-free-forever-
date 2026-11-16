// FUN_1801db620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801db620 */

undefined1 (*) [16] FUN_1801db620(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  uVar3 = *(ulonglong *)(param_2 + 8);
  if (uVar3 <= param_3) goto switchD_1801db67b_caseD_0;
  uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + param_3 * 8);
  lVar7 = (uVar4 & 0xfffffffffffffff) + *(longlong *)(param_2 + 0x10);
  switch((byte)(uVar4 >> 0x3c)) {
  case 1:
    uVar2 = *(undefined4 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 1;
    *(undefined4 *)(*param_1 + 8) = uVar2;
    break;
  case 2:
    uVar2 = *(undefined4 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 2;
    *(undefined4 *)(*param_1 + 8) = uVar2;
    break;
  case 3:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 3;
    break;
  case 4:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 4;
    break;
  case 5:
    (*param_1)[8] = *(undefined1 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 5;
    break;
  case 6:
    (*param_1)[8] = *(undefined1 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 6;
    break;
  case 7:
    *(undefined4 *)(*param_1 + 8) = *(undefined4 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 7;
    break;
  case 8:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 8;
    break;
  case 9:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 9;
    break;
  case 10:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 10;
    break;
  case 0xb:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(lVar7 + uVar3 * 8);
    (*param_1)[0] = 0xb;
    break;
  case 0xc:
    puVar1 = (undefined8 *)(lVar7 + uVar3 * 8);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    (*param_1)[0] = 0xc;
    goto LAB_1801db747;
  case 0xd:
    puVar1 = (undefined8 *)(lVar7 + uVar3 * 8);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    (*param_1)[0] = 0xd;
LAB_1801db747:
    *(undefined8 *)(*param_1 + 8) = uVar5;
    *(undefined8 *)param_1[1] = uVar6;
  }
switchD_1801db67b_caseD_0:
  if ((*param_1)[0] == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Argument not found.");
  }
  return param_1;
}



