// FUN_180038810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180038810 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180038810(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar4;
  uint uVar3;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_138 [231];
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49 [9];
  
  uVar4 = (uint)&local_51;
  uVar3 = uVar4 ^ 0x1457bc6c;
  if (param_1[1] == param_2) {
    uVar9 = uVar4 ^ 0x10cec5e ^ uVar3 ^ 0x155b5032;
    bVar1 = (byte)&local_50 & 0x1f;
    bVar2 = (byte)&local_50 & 0x1f;
    uVar8 = (uVar9 >> 0xd ^ (uVar9 << bVar1 | uVar9 >> 0x20 - bVar1)) * uVar9 * -0x568e0fd5;
    uVar5 = (uVar9 >> 0xd ^ (uVar9 << bVar2 | uVar9 >> 0x20 - bVar2)) * uVar9 * -0x568e0fd5;
    uVar5 = ((uVar9 + (uVar9 * 0x50492877) % 0x3f1) - (uVar9 * 0x50492877) % 0x3f1) +
            (uVar5 ^ uVar8) + (~uVar5 & uVar8) * -2;
    uVar7 = (ulonglong)uVar5;
    bVar1 = (byte)&local_4f & 0x3f;
    bVar2 = (byte)&local_4f & 0x3f;
    uVar14 = ((ulonglong)(uVar5 >> 0xd) ^ (uVar7 << bVar1 | (ulonglong)(uVar5 >> 0x40 - bVar1))) *
             uVar7 * 0x69767145;
    uVar12 = ((ulonglong)(uVar5 >> 0xd) ^ (uVar7 << bVar2 | (ulonglong)(uVar5 >> 0x40 - bVar2))) *
             uVar7 * 0x69767145;
    uVar13 = ~uVar12 & uVar14;
    uVar7 = (uVar7 + (~uVar14 & uVar12)) - uVar13;
    if (uVar7 < (ulonglong)param_1[1]) {
      do {
        uVar5 = (uint)*(byte *)(*param_1 + uVar7);
        if (((*(byte *)(*param_1 + uVar7) < 0x30) ||
            (uVar9 = uVar3 * uVar3 * uVar3 * uVar3 * uVar3,
            uVar11 = uVar3 * uVar3 * uVar3 * uVar3 * uVar3, iVar6 = uVar3 * 2,
            uVar8 = iVar6 * iVar6 * iVar6 * iVar6, uVar10 = iVar6 * iVar6 * iVar6 * iVar6,
            (int)(((~uVar8 & uVar10) - (~uVar10 & uVar8)) * -0x156377df +
                 ((uVar4 ^ 0x2064bff3) + (uVar11 ^ uVar9) + (~uVar11 & uVar9) * -2 ^ uVar3 ^
                 0x343303a6)) < (int)uVar5)) &&
           ((uVar8 = (uVar3 * 0x754fecf3) % 0xfb, uVar9 = (uVar3 * 0x754fecf3) % 0xfb,
            uVar8 = ((uVar4 ^ 0x68956449) - (~uVar8 & uVar9)) + (~uVar9 & uVar8),
            uVar9 = ((uVar4 ^ 0x976a9bd7) & uVar8) + (~uVar8 & (uVar4 ^ 0x68956428)),
            bVar1 = (byte)&local_4e & 0x1f, bVar2 = (byte)&local_4e & 0x1f,
            uVar10 = (uVar9 >> 0xd ^ (uVar9 << bVar1 | uVar9 >> 0x20 - bVar1)) * uVar9 * 0x2d60b1bf,
            uVar8 = (uVar9 >> 0xd ^ (uVar9 << bVar2 | uVar9 >> 0x20 - bVar2)) * uVar9 * 0x2d60b1bf,
            (int)uVar5 < (int)((uVar8 ^ uVar10) + uVar9 + (~uVar8 & uVar10) * -2) ||
            (uVar8 = (uVar3 * -0x3cb0a8cd) % 0x1fd, uVar9 = (uVar3 * -0x3cb0a8cd) % 0x1fd,
            uVar10 = uVar3 ^ ((uVar4 ^ 0x2ea3795b) + (~uVar9 & uVar8)) - (~uVar8 & uVar9) ^
                     0x3af4c551, bVar1 = (byte)&local_4d & 0x1f, bVar2 = (byte)&local_4d & 0x1f,
            uVar9 = (uVar10 >> 0xd ^ (uVar10 << bVar1 | uVar10 >> 0x20 - bVar1)) * uVar10 *
                    0x1a92cbcd,
            uVar8 = (uVar10 >> 0xd ^ (uVar10 << bVar2 | uVar10 >> 0x20 - bVar2)) * uVar10 *
                    0x1a92cbcd,
            (int)((~uVar9 & uVar8) + ((uVar10 + 0xb726b9dd) - ((~uVar8 & uVar9) + 0xb726b9dd))) <
            (int)uVar5)))) {
          uVar10 = uVar3 * uVar3 * uVar3 * uVar3;
          uVar5 = uVar3 * uVar3 * uVar3 * uVar3;
          uVar11 = uVar4 ^ 0xa741b9fe ^
                   (uVar4 ^ 0xa741b9fe) + (uVar5 ^ uVar10) + (~uVar5 & uVar10) * -2;
          bVar1 = (byte)&local_4c & 0x1f;
          bVar2 = (byte)&local_4c & 0x1f;
          uVar9 = (uVar11 >> 0xd ^ (uVar11 << bVar1 | uVar11 >> 0x20 - bVar1)) * uVar11 * 0x482ab815
          ;
          uVar5 = (uVar11 >> 0xd ^ (uVar11 << bVar2 | uVar11 >> 0x20 - bVar2)) * uVar11 * 0x482ab815
          ;
          uVar8 = uVar3 * uVar3 * uVar3 * uVar3;
          iVar6 = ((~uVar10 & uVar8) - (~uVar8 & uVar10)) * 0x324465a7 +
                  ((uVar11 + (~uVar9 & uVar5)) - (~uVar5 & uVar9));
          uVar5 = iVar6 * iVar6 * iVar6 * iVar6;
          uVar8 = iVar6 * iVar6 * iVar6 * iVar6;
          uVar13 = (ulonglong)((~uVar5 & uVar8) + (iVar6 - (~uVar8 & uVar5)));
          uVar8 = uVar4 ^ 0xe55468b2;
          bVar1 = (byte)&local_4b & 0x1f;
          bVar2 = (byte)&local_4b & 0x1f;
          uVar9 = (uVar8 >> 0xd ^ (uVar8 << bVar1 | uVar8 >> 0x20 - bVar1)) * uVar8 * 0x4da08df7;
          uVar5 = (uVar8 >> 0xd ^ (uVar8 << bVar2 | uVar8 >> 0x20 - bVar2)) * uVar8 * 0x4da08df7;
          uVar5 = (~uVar9 & uVar5) +
                  ((uVar8 + (uVar3 * -0x2a9596f5) % 0x1fd + 0x6e4d73ba) -
                  ((~uVar5 & uVar9) + (uVar3 * -0x2a9596f5) % 0x1fd + 0x6e4d73ba)) ^ uVar3 ^
                  0xf103d4df;
          bVar1 = (byte)&local_4a & 0x1f;
          bVar2 = (byte)&local_4a & 0x1f;
          uVar9 = (uVar5 >> 0xd ^ (uVar5 << bVar1 | uVar5 >> 0x20 - bVar1)) * uVar5 * 0x354abf05;
          uVar8 = (uVar5 >> 0xd ^ (uVar5 << bVar2 | uVar5 >> 0x20 - bVar2)) * uVar5 * 0x354abf05;
          iVar6 = (uVar8 ^ uVar9) +
                  uVar5 + (uVar5 * uVar5 - uVar5 * uVar5) * (uVar5 * uVar5 + uVar5 * uVar5) +
                  (~uVar8 & uVar9) * -2;
          if (iVar6 != 0) goto LAB_18003a886;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulonglong)param_1[1]);
    }
    iVar6 = 2;
LAB_18003a886:
    if (iVar6 == 2) {
      uVar13 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
  else {
    uVar10 = (uVar3 | 0xda28084a) ^ (~uVar3 | 0x25d7f7b5);
    uVar5 = ((~uVar3 | 0x25d7f7b5 | uVar3 | 0xda28084a) ^ 0xffffffff) * 2;
    uVar8 = (uint)local_49 ^ 0x9fc489a2;
    uVar11 = (uint)local_49 ^ 0x603b765d;
    uVar9 = uVar11 ^ uVar8;
    uVar9 = uVar9 & uVar10 ^ uVar11 ^ uVar8 ^ uVar9 & uVar5;
    uVar5 = (uVar5 & uVar10) * 2;
    uVar8 = uVar9 ^ uVar5;
    uVar5 = (~uVar9 & uVar5) * 2;
    uVar10 = uVar3 * uVar3 * uVar3 * uVar3;
    uVar9 = uVar3 * uVar3 * uVar3 * uVar3;
    uVar5 = (((~uVar5 & uVar8) - (~uVar8 & uVar5)) - ((~uVar9 & uVar10) + 0xb726b9dd)) +
            (~uVar10 & uVar9) + 0xb726b9dd;
    iVar6 = uVar5 + (uVar4 ^ 0xce7fb426);
    uVar10 = iVar6 * iVar6 * iVar6 * iVar6 * iVar6;
    uVar9 = iVar6 * iVar6 * iVar6 * iVar6 * iVar6;
    uVar8 = uVar3 * uVar3 * uVar3 * uVar3;
    uVar3 = uVar3 * uVar3 * uVar3 * uVar3;
    uVar13 = (ulonglong)
             ((uVar5 ^ uVar4 ^ 0xce7fb426) + (uVar9 ^ uVar10) + (~uVar9 & uVar10) * -2 +
             ((uVar3 ^ uVar8) + (~uVar3 & uVar8) * -2) * 0x62df77b3);
  }
  if (DAT_1808d5f00 != (DAT_1808d5f00 ^ (ulonglong)auStack_138 ^ (ulonglong)auStack_138)) {
  }
  return uVar13 & 0xffffffffffffff01;
}



