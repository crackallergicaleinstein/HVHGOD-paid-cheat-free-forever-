// FUN_1805af5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805af5c0 */

int FUN_1805af5c0(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int local_18;
  undefined1 local_14 [12];
  
  local_18 = 0;
  puVar2 = (uint *)FUN_18057aad0(param_2,0x48,&local_18);
  if (local_18 == 0) {
    *puVar2 = param_3;
    *(undefined2 *)(puVar2 + 3) = 0x7fff;
    puVar2[0x10] = *(uint *)(param_1 + 8);
    *(undefined8 *)(puVar2 + 0xe) = param_2;
    local_18 = FUN_1805b05a0(param_1,puVar2,local_14);
    if (local_18 == 0) {
      lVar1 = *(longlong *)(puVar2 + 0xc);
      if (((lVar1 != 0) && ((*puVar2 & 0x1000) != 0)) &&
         ((*(int *)(lVar1 + 0x34) != 0 || (*(int *)(lVar1 + 0x44) != 0)))) {
        if ((int)(short)puVar2[4] - (int)(short)puVar2[3] != (uint)*(ushort *)(lVar1 + 8)) {
          *(short *)(lVar1 + 8) = (short)puVar2[4] - (short)puVar2[3];
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0xc) != (short)puVar2[3]) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0xc) = (short)puVar2[3];
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0x10) != *(short *)((longlong)puVar2 + 0x12)) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0x10) = *(short *)((longlong)puVar2 + 0x12);
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0x12) != (short)puVar2[5]) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0x12) = (short)puVar2[5];
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0xe) = -(short)puVar2[5];
        }
        if ((int)*(short *)((longlong)puVar2 + 0x12) + (int)(short)puVar2[5] !=
            (uint)*(ushort *)(*(longlong *)(puVar2 + 0xc) + 10)) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 10) =
               *(short *)((longlong)puVar2 + 0x12) + (short)puVar2[5];
        }
      }
      if ((*puVar2 & 1) == 0) {
        if (*(longlong *)(puVar2 + 0xc) == 0) {
          local_18 = 3;
        }
        *param_4 = *(undefined8 *)(puVar2 + 0xc);
        goto LAB_1805af72c;
      }
      local_18 = ((*puVar2 & 0x20) != 0) + 0xb9;
    }
    FUN_1805af050(*(undefined8 *)(puVar2 + 0xc));
    FUN_18057abd0(param_2,*(undefined8 *)(puVar2 + 0xc));
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
  }
  if (puVar2 == (uint *)0x0) {
    return local_18;
  }
LAB_1805af72c:
  FUN_18057abd0(param_2,*(undefined8 *)(puVar2 + 6));
  puVar2[6] = 0;
  puVar2[7] = 0;
  FUN_18057abd0(param_2,puVar2);
  return local_18;
}



