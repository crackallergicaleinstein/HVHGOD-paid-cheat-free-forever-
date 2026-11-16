// FUN_1803b0bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0bd0 */

void FUN_1803b0bd0(void)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  longlong lStack_60;
  char *local_58;
  undefined8 local_50;
  undefined **local_48;
  longlong local_40;
  undefined *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  FUN_1803b1a50();
  local_38 = &DAT_180c719c0;
  local_30 = FUN_1803b0e70;
  local_68 = (undefined1 *)0xdb35e39b27e1c185;
  lStack_60 = -0x5fae7e11882a85fa;
  local_78 = 0x65746e695f676f6c;
  uStack_70 = 0x6c616e72;
  local_28 = &local_78;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_180903db8;
  lVar2 = DAT_1808da460;
  if ((DAT_180903db8 == DAT_1808da460) && (lVar6 = DAT_180c71a28, DAT_180c71a28 != 0))
  goto LAB_1803b0e01;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c71a20)) {
    lVar6 = 0;
    goto LAB_1803b0e01;
  }
  iVar3 = FUN_1805f68d0(&DAT_180903d60);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180903dac == 0x7fffffff) {
    DAT_180903dac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar7 = 1000;
  if (DAT_180903db8 == lVar2) {
    if ((DAT_180c71a28 == 0) && (DAT_180c71a20 <= UVar4)) goto LAB_1803b0d6c;
  }
  else {
    DAT_180903db0 = 1000;
LAB_1803b0d6c:
    lVar5 = -1;
    do {
      lStack_60 = lVar5 + 1;
      pcVar1 = "ier0.dll:>E8????????448B55B3" + lVar5;
      lVar5 = lStack_60;
    } while (*pcVar1 != '\0');
    local_68 = &DAT_180825ad0;
    local_58 = "patterns::log_internal";
    local_50 = 0x16;
    DAT_180c71a28 = FUN_1800e5d20(&local_58,&local_68);
    DAT_180903db8 = lVar2;
    DAT_180c71a20 = 0xffffffffffffffff;
    if (DAT_180c71a28 == 0) {
      DAT_180c71a20 = DAT_180903db0 + UVar4;
      uVar7 = 60000;
      if (DAT_180903db0 < 60000) {
        uVar7 = DAT_180903db0 * 2;
      }
    }
    DAT_180903db0 = uVar7;
  }
  lVar6 = DAT_180c71a28;
  FUN_1805f68fc(&DAT_180903d60);
LAB_1803b0e01:
  local_48 = &local_38;
  local_40 = (longlong)register0x00000020 + -0x18;
  local_20 = lVar6;
  FUN_18044e620(&local_48);
  return;
}



