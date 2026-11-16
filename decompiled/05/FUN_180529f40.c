// FUN_180529f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180529f40 */

char * FUN_180529f40(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  char *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  if ((((DAT_180b909b0 != 0) && (-1 < param_1)) &&
      (param_1 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) /
                      0x68))) &&
     (puVar11 = (ushort *)((longlong)param_1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
     puVar11 != (ushort *)0x0)) {
    uVar2 = *puVar11;
    uVar13 = 0xcbf29ce484222325;
    bVar4 = false;
    plVar9 = (longlong *)
             ((((ulonglong)(uVar2 >> 8) ^
               ((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
              DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
    lVar14 = plVar9[1];
    if (lVar14 == DAT_180cc9c90) {
LAB_18052a016:
      lVar14 = 0;
    }
    else {
      uVar3 = *(ushort *)(lVar14 + 0x10);
      while (uVar2 != uVar3) {
        if (lVar14 == *plVar9) goto LAB_18052a016;
        lVar14 = *(longlong *)(lVar14 + 8);
        uVar3 = *(ushort *)(lVar14 + 0x10);
      }
    }
    lVar6 = DAT_180cc9c90;
    if (lVar14 != 0) {
      lVar6 = lVar14;
    }
    if (((lVar6 != DAT_180cc9c90) &&
        (lVar14 = *(longlong *)(lVar6 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar14 != 0)) &&
       (*(char *)(lVar14 + 0xb0) == '\x03')) {
      puVar5 = (undefined8 *)FUN_180529e00(local_28);
      puVar12 = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar12 = (undefined8 *)*puVar5;
      }
      uVar10 = 0;
      if (puVar5[2] != 0) {
        do {
          pbVar1 = (byte *)(uVar10 + (longlong)puVar12);
          uVar10 = uVar10 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar10 < (ulonglong)puVar5[2]);
      }
      lVar6 = FUN_180177b00(&DAT_180ccf4e0,local_38,puVar5,uVar13);
      lVar14 = DAT_180ccf4e8;
      if (*(longlong *)(lVar6 + 8) != 0) {
        lVar14 = *(longlong *)(lVar6 + 8);
      }
      if ((lVar14 != DAT_180ccf4e8) &&
         (uVar13 = *(ulonglong *)(lVar14 + 0x30), UVar7 = GetTickCount64(), UVar7 < uVar13)) {
        bVar4 = true;
      }
      FUN_18015c010(local_28);
      pcVar8 = "Loading...";
      if (bVar4) {
        pcVar8 = "Retrying...";
      }
      return pcVar8;
    }
  }
  return (char *)0x0;
}



