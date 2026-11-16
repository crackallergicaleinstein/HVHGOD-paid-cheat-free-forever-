// FUN_180274ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180274ef0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180274ef0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  char *local_68;
  longlong local_60;
  char *local_58;
  undefined8 local_50;
  undefined *local_48;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808f0840;
  lVar2 = DAT_1808da460;
  if ((DAT_1808f0840 == DAT_1808da460) && (pcVar7 = (code *)DAT_180c64d58, DAT_180c64d58 != 0)) {
LAB_18027506b:
    uVar6 = (*pcVar7)(0,param_2,param_3);
  }
  else {
    UVar4 = GetTickCount64();
    if ((lVar5 != lVar2) || (DAT_180c64d60 <= UVar4)) {
      local_48 = &DAT_1808f0790;
      iVar3 = FUN_1805f68d0(&DAT_1808f0790);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f07dc == 0x7fffffff) {
        DAT_1808f07dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar8 = 1000;
      if (DAT_1808f0840 == lVar2) {
        if ((DAT_180c64d58 == 0) && (DAT_180c64d60 <= UVar4)) goto LAB_180274fd0;
      }
      else {
        DAT_1808f0788 = 1000;
LAB_180274fd0:
        lVar5 = -1;
        do {
          local_60 = lVar5 + 1;
          lVar1 = lVar5 + 1;
          lVar5 = local_60;
        } while ("client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                 [lVar1] != '\0');
        local_68 = 
        "client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
        ;
        local_58 = "patterns::get_tick_view_angles";
        local_50 = 0x1e;
        DAT_180c64d58 = FUN_1800e5d20(&local_58,&local_68);
        DAT_1808f0840 = lVar2;
        DAT_180c64d60 = 0xffffffffffffffff;
        if (DAT_180c64d58 == 0) {
          DAT_180c64d60 = DAT_1808f0788 + UVar4;
          uVar8 = 60000;
          if (DAT_1808f0788 < 60000) {
            uVar8 = DAT_1808f0788 * 2;
          }
        }
        DAT_1808f0788 = uVar8;
      }
      pcVar7 = (code *)DAT_180c64d58;
      FUN_1805f68fc(&DAT_1808f0790);
      if (pcVar7 != (code *)0x0) goto LAB_18027506b;
    }
    uVar6 = 0;
  }
  return uVar6;
}



