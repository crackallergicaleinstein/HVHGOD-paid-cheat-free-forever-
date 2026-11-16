// FUN_1804b1d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1d00 */

void FUN_1804b1d00(undefined4 *param_1,undefined8 param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar4 = DAT_180bb8ae8;
  *(longlong *)(param_1 + 10) = DAT_180bb8ae8;
  lVar2 = *(longlong *)(lVar4 + 0x14d0);
  if ((*(byte *)(lVar4 + 0x28cc) & 0x20) != 0) {
    FUN_1804cf3e0("Clipper: Begin(%d,%.2f) in \'%s\'\n",param_2,(double)param_3,
                  *(undefined8 *)(lVar2 + 8));
  }
  if ((*(longlong *)(lVar4 + 0x2338) != 0) &&
     (*(char *)(*(longlong *)(lVar4 + 0x2338) + 0x23e) != '\0')) {
    FUN_1804ef4b0();
  }
  *(double *)(param_1 + 6) = (double)*(float *)(lVar2 + 0x11c);
  param_1[4] = param_3;
  param_1[3] = (int)param_2;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  iVar5 = *(int *)(lVar4 + 0x2320) + 1;
  *(int *)(lVar4 + 0x2320) = iVar5;
  if (*(int *)(lVar4 + 9000) < iVar5) {
    local_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_1804cfff0((int *)(lVar4 + 9000),iVar5,&local_48);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(lVar4 + 0x2330) + -0x28 + (longlong)*(int *)(lVar4 + 0x2320) * 0x28);
  *puVar1 = param_1;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  iVar5 = *(int *)((longlong)puVar1 + 0x1c);
  if (iVar5 < 0) {
    iVar5 = iVar5 + iVar5 / 2;
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_1804d13f0(puVar1 + 3,iVar3);
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + 0x16c);
  *(undefined8 **)(param_1 + 0xc) = puVar1;
  *(double *)(param_1 + 8) = (double)*(float *)(puVar1 + 1);
  return;
}



