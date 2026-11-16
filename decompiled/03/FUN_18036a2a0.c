// FUN_18036a2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a2a0 */

ulonglong FUN_18036a2a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  if ((*(char *)*param_1 != '\0') && (pcVar8 = (char *)param_1[1], *pcVar8 != '\0')) {
LAB_18036a355:
    return CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
  }
  pcVar8 = (char *)FUN_180369970(param_1[2],0xbf800000,0);
  if ((char)pcVar8 != '\0') {
    puVar1 = (undefined8 *)param_1[3];
    puVar2 = (undefined8 *)*param_1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar4 = puVar1[5];
    puVar2[4] = puVar1[4];
    puVar2[5] = uVar4;
    puVar2[6] = puVar1[6];
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar1 + 7);
    lVar3 = param_1[3];
    puVar1 = (undefined8 *)param_1[1];
    uVar4 = *(undefined8 *)(lVar3 + 0x44);
    uVar5 = *(undefined8 *)(lVar3 + 0x4c);
    uVar6 = *(undefined8 *)(lVar3 + 0x54);
    *puVar1 = *(undefined8 *)(lVar3 + 0x3c);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar4 = *(undefined8 *)(lVar3 + 100);
    puVar1[4] = *(undefined8 *)(lVar3 + 0x5c);
    puVar1[5] = uVar4;
    puVar1[6] = *(undefined8 *)(lVar3 + 0x6c);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(lVar3 + 0x74);
    uVar7 = FUN_18036a190(param_1[5]);
    *(undefined4 *)param_1[4] = uVar7;
    pcVar8 = (char *)*param_1;
    if ((*pcVar8 != '\0') && (pcVar8 = (char *)param_1[1], *pcVar8 != '\0')) goto LAB_18036a355;
  }
  return (ulonglong)pcVar8 & 0xffffffffffffff00;
}



