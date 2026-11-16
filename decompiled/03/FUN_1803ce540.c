// FUN_1803ce540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ce540 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_1803ce540(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  uStack_50 = 0;
  plVar10 = plVar1;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar5 = plVar7;
    do {
      plVar7 = plVar5;
      cVar6 = FUN_180114040(plVar7 + 4,param_3);
      if (cVar6 == '\0') {
        cVar6 = FUN_180114040(plVar7 + 8,param_3 + 4);
      }
      if (-1 < cVar6) {
        plVar9 = plVar7;
        plVar10 = plVar7;
      }
      else {
        plVar9 = plVar7 + 2;
      }
      uStack_50 = (uint)(-1 < cVar6);
      plVar5 = (longlong *)*plVar9;
    } while (*(char *)(*plVar9 + 0x19) == '\0');
  }
  local_58 = plVar7;
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    cVar6 = FUN_180114040(param_3,plVar10 + 4);
    if (cVar6 == '\0') {
      cVar6 = FUN_180114040(param_3 + 4,plVar10 + 8);
    }
    if (-1 < cVar6) {
      *param_2 = plVar10;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (param_1[1] == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1800a7740();
  }
  uStack_60 = 0;
  local_68 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_78 = "tier0.dll:g_pMemAlloc";
    local_70 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
  }
  plVar7 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x68);
  *(undefined1 (*) [16])(plVar7 + 4) = (undefined1  [16])0x0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  lVar2 = param_3[1];
  lVar3 = param_3[2];
  lVar4 = param_3[3];
  plVar7[4] = *param_3;
  plVar7[5] = lVar2;
  plVar7[6] = lVar3;
  plVar7[7] = lVar4;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  *(undefined1 (*) [16])(plVar7 + 8) = (undefined1  [16])0x0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  lVar2 = param_3[5];
  lVar3 = param_3[6];
  lVar4 = param_3[7];
  plVar7[8] = param_3[4];
  plVar7[9] = lVar2;
  plVar7[10] = lVar3;
  plVar7[0xb] = lVar4;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined4 *)(plVar7 + 0xc) = *param_4;
  *plVar7 = (longlong)plVar1;
  plVar7[1] = (longlong)plVar1;
  plVar7[2] = (longlong)plVar1;
  *(undefined2 *)(plVar7 + 3) = 0;
  uStack_60 = CONCAT44(uStack_4c,uStack_50);
  local_68 = local_58;
  uVar8 = FUN_180140480(param_1,&local_68);
  *param_2 = uVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



