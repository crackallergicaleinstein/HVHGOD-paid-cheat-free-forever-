// FUN_180438a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180438a20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180438a20(undefined8 *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_18063ab10(puVar3,0,0xd0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    pcVar1 = (char *)(puVar3 + 5);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    puVar3[6] = 0;
    puVar3[7] = 0;
    local_38 = pcVar1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_28 = "tier0.dll:g_pMemAlloc";
      local_20 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
    }
    lVar2 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    puVar3[6] = lVar2;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 7;
    puVar3[0xc] = 8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    FUN_1801406e0(puVar3 + 8,0x10,puVar3[6]);
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined4 *)(puVar3 + 0x14) = 1;
    *(undefined8 *)((longlong)puVar3 + 0xa4) = 1;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    *(undefined1 *)(puVar3 + 0x19) = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



