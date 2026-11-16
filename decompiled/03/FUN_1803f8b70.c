// FUN_1803f8b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f8b70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_1803f8b70(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  pauVar3 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x188);
  if (pauVar3 == (undefined1 (*) [16])0x0) {
    pauVar3 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar3 + 8) = 1;
    *(undefined4 *)(*pauVar3 + 0xc) = 1;
    *(undefined ***)*pauVar3 = std::_Ref_count_obj2<rendering::player_preview_geometry>::vftable;
    lVar4 = 2;
    pauVar2 = pauVar3 + 1;
    do {
      puVar6 = param_2;
      pauVar5 = pauVar2;
      uVar1 = puVar6[1];
      *(undefined8 *)*pauVar5 = *puVar6;
      *(undefined8 *)(*pauVar5 + 8) = uVar1;
      uVar1 = puVar6[3];
      *(undefined8 *)pauVar5[1] = puVar6[2];
      *(undefined8 *)(pauVar5[1] + 8) = uVar1;
      uVar1 = puVar6[5];
      *(undefined8 *)pauVar5[2] = puVar6[4];
      *(undefined8 *)(pauVar5[2] + 8) = uVar1;
      uVar1 = puVar6[7];
      *(undefined8 *)pauVar5[3] = puVar6[6];
      *(undefined8 *)(pauVar5[3] + 8) = uVar1;
      uVar1 = puVar6[9];
      *(undefined8 *)pauVar5[4] = puVar6[8];
      *(undefined8 *)(pauVar5[4] + 8) = uVar1;
      uVar1 = puVar6[0xb];
      *(undefined8 *)pauVar5[5] = puVar6[10];
      *(undefined8 *)(pauVar5[5] + 8) = uVar1;
      uVar1 = puVar6[0xd];
      *(undefined8 *)pauVar5[6] = puVar6[0xc];
      *(undefined8 *)(pauVar5[6] + 8) = uVar1;
      uVar1 = puVar6[0xf];
      *(undefined8 *)pauVar5[7] = puVar6[0xe];
      *(undefined8 *)(pauVar5[7] + 8) = uVar1;
      lVar4 = lVar4 + -1;
      pauVar2 = pauVar5 + 8;
      param_2 = puVar6 + 0x10;
    } while (lVar4 != 0);
    uVar1 = puVar6[0x11];
    *(undefined8 *)pauVar5[8] = puVar6[0x10];
    *(undefined8 *)(pauVar5[8] + 8) = uVar1;
    uVar1 = puVar6[0x13];
    *(undefined8 *)pauVar5[9] = puVar6[0x12];
    *(undefined8 *)(pauVar5[9] + 8) = uVar1;
    uVar1 = puVar6[0x15];
    *(undefined8 *)pauVar5[10] = puVar6[0x14];
    *(undefined8 *)(pauVar5[10] + 8) = uVar1;
    uVar1 = puVar6[0x17];
    *(undefined8 *)pauVar5[0xb] = puVar6[0x16];
    *(undefined8 *)(pauVar5[0xb] + 8) = uVar1;
    uVar1 = puVar6[0x19];
    *(undefined8 *)pauVar5[0xc] = puVar6[0x18];
    *(undefined8 *)(pauVar5[0xc] + 8) = uVar1;
    uVar1 = puVar6[0x1b];
    *(undefined8 *)pauVar5[0xd] = puVar6[0x1a];
    *(undefined8 *)(pauVar5[0xd] + 8) = uVar1;
    uVar1 = puVar6[0x1d];
    *(undefined8 *)pauVar5[0xe] = puVar6[0x1c];
    *(undefined8 *)(pauVar5[0xe] + 8) = uVar1;
    *(undefined8 *)pauVar5[0xf] = puVar6[0x1e];
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])*param_1 = pauVar3 + 1;
  *(undefined1 (**) [16])(*param_1 + 8) = pauVar3;
  return param_1;
}



